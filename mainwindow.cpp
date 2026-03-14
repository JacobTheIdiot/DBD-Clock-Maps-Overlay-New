#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "style.h"
#include <QImageReader>
#include <QScreen>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QGridLayout>
#include <QDebug>
#include "constants.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    qApp->setStyle("Fusion");
    this->setStyleSheet(QString::fromUtf8(GLOBAL_STYLE));

    // Creating image overlay as a separate window
    overlayWindow = new QWidget(nullptr);
    overlayWindow->setAttribute(Qt::WA_QuitOnClose, false);
    overlayWindow->setAttribute(Qt::WA_TranslucentBackground, true);
    overlayWindow->setStyleSheet("background: transparent");
    overlayWindow->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::WindowTransparentForInput);

    QGridLayout* overlayMainLayout = new QGridLayout(overlayWindow);
    overlayMainLayout->setContentsMargins(0, 0, 0, 0);
    overlayWindow->setLayout(overlayMainLayout);

    overlayLabel = new QLabel(overlayWindow);
    overlayMainLayout->addWidget(overlayLabel);

    // Populating realms combo box
    ui->chooseMapComboBox->addItem(REALM_PATH_PAIRS[0].second);
    for (const auto& el : REALM_PATH_PAIRS)
        ui->chooseRealmComboBox->addItem(el.first);
    connect(ui->chooseRealmComboBox, &QComboBox::currentIndexChanged, this, &MainWindow::getMaps);
    connect(ui->chooseMapComboBox, &QComboBox::currentIndexChanged, this, &MainWindow::pickMap);

    QObject::connect(ui->startShowingButton, &QPushButton::pressed, this, &MainWindow::toggleOverlay);
    QObject::connect(ui->chooseOwnImageButton, &QPushButton::pressed, this, &MainWindow::chooseOwnImage);

    ui->overlayOffsetXSlider->setMinimum(0);
    ui->overlayOffsetXSlider->setMaximum(100);
    QObject::connect(ui->overlayOffsetXSlider, &QSlider::valueChanged, this, &MainWindow::setOverlayOffsetX);

    ui->overlayOffsetYSlider->setMinimum(0);
    ui->overlayOffsetYSlider->setMaximum(100);
    QObject::connect(ui->overlayOffsetYSlider, &QSlider::valueChanged, this, &MainWindow::setOverlayOffsetY);

    ui->overlaySizeSlider->setMinimum(0);
    ui->overlaySizeSlider->setMaximum(100);
    QObject::connect(ui->overlaySizeSlider, &QSlider::valueChanged, this, &MainWindow::setOverlaySize);
    ui->overlaySizeSlider->setValue(overlaySize * 100);

    ui->overlayOpacitySlider->setMinimum(0);
    ui->overlayOpacitySlider->setMaximum(100);
    QObject::connect(ui->overlayOpacitySlider, &QSlider::valueChanged, this, &MainWindow::setOverlayOpacity);
    ui->overlayOpacitySlider->setValue(overlayOpacity * 100);

    moveOverlay();
}

MainWindow::~MainWindow()
{
    delete overlayWindow;
    delete ui;
}

void MainWindow::toggleOverlay()
{
    if (overlayWindow->isHidden()) {
        if (currentImage == "") {
            QMessageBox msgBox(this);
            msgBox.setWindowTitle("No image chosen!");
            msgBox.setText("Please, choose an image first to continue.");
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.exec();
            return;
        }
        overlayWindow->show();
        // Use stylesheet-friendly override so #startShowingButton rules still apply
        ui->startShowingButton->setStyleSheet(
            "QPushButton#startShowingButton { background-color: #7a0e0e; color: #ffd4d4; border: 1px solid #b01010; }"
            "QPushButton#startShowingButton:hover { background-color: #9f1010; border-color: #cc1414; }"
        );
        ui->startShowingButton->setText("Hide Overlay");
        updateImageLabel(overlayLabel);
    }
    else {
        overlayWindow->hide();
        // Clear override so global stylesheet #startShowingButton rules take over again
        ui->startShowingButton->setStyleSheet("");
        ui->startShowingButton->setText("Show Overlay");
    }
}

void MainWindow::resizeOverlay()
{
    if (currentImage == "")
        return;

    const QImageReader reader(currentImage);
    const QSize sizeOfImage = reader.size();
    overlayWindow->setFixedSize(sizeOfImage.width() * overlaySize, sizeOfImage.height() * overlaySize);
    updateImageLabel(overlayLabel);
}

void MainWindow::moveOverlay()
{
    const QScreen* screen = QGuiApplication::primaryScreen();
    const QRect screenGeometry = screen->geometry();
    overlayWindow->move(screenGeometry.width() * overlayOffsetX, screenGeometry.height() * overlayOffsetY);
}

void MainWindow::getMaps(const int index)
{
    ui->chooseMapComboBox->clear();

    if (index <= 0) {
        ui->chooseMapComboBox->addItem(REALM_PATH_PAIRS[0].second);
        return;
    }

    const QString pathToMaps = buildPath(index);
    const QDir directory(pathToMaps);
    QStringList maps = directory.entryList();
    ui->chooseMapComboBox->addItem(CHOOSE_MAP_MESSAGE);
    for (auto& el : maps) {
        el.remove(".png");
        ui->chooseMapComboBox->addItem(el);
    }
}

void MainWindow::pickMap()
{
    const int realmIndex = ui->chooseRealmComboBox->currentIndex();
    if (realmIndex <= 0)
        return;

    const QString chosenMap = ui->chooseMapComboBox->currentText();
    if (chosenMap == CHOOSE_MAP_MESSAGE)
        return;

    const QString pathToMaps = buildPath(realmIndex);
    const QDir directory(pathToMaps);
    const QStringList maps = directory.entryList();

    for (const auto& el : maps) {
        if (el == chosenMap + ".png") {
            setImage(pathToMaps + el);
            return;
        }
    }
}

void MainWindow::chooseOwnImage()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setNameFilter("Images (*.png *.jpeg *.jpg)");

    if (dialog.exec()) {
        const QStringList fileName = dialog.selectedFiles();
        setImage(fileName[0]);
    }
}

void MainWindow::setImage(const QString url)
{
    currentImage = url;
    updateImageLabel(ui->mainWindowImage);
    resizeOverlay();
}

void MainWindow::setOverlayOffsetX(const int offset)
{
    ui->overlayOffsetXLabel->setText("X Offset  " + QString::number(offset) + "%");
    overlayOffsetX = static_cast<qreal>(offset) / 100;
    moveOverlay();
}

void MainWindow::setOverlayOffsetY(const int offset)
{
    ui->overlayOffsetYLabel->setText("Y Offset  " + QString::number(offset) + "%");
    overlayOffsetY = static_cast<qreal>(offset) / 100;
    moveOverlay();
}

void MainWindow::setOverlaySize(const int size)
{
    ui->overlaySizeLabel->setText("Size  " + QString::number(size) + "%");
    overlaySize = static_cast<qreal>(size) / 100;
    resizeOverlay();
}

void MainWindow::setOverlayOpacity(const int opacity)
{
    ui->overlayOpacityLabel->setText("Opacity  " + QString::number(opacity) + "%");
    overlayOpacity = static_cast<qreal>(opacity) / 100;
    overlayWindow->setWindowOpacity(overlayOpacity);
}

void MainWindow::resizeEvent(QResizeEvent* event)
{
    QMainWindow::resizeEvent(event);
    updateImageLabel(ui->mainWindowImage);
}

void MainWindow::updateImageLabel(QLabel* label)
{
    if (currentImage == "")
        return;

    QPixmap pixmap(currentImage);
    pixmap = pixmap.scaled(label->size(), Qt::KeepAspectRatio);
    label->setPixmap(pixmap);
}

QString MainWindow::buildPath(const int index)
{
    return ":/" + REALM_PATH_PAIRS[index].second + "/resources/Callouts/" + REALM_PATH_PAIRS[index].second + "/";
}