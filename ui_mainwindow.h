/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QFrame>

#include "style.h"

QT_BEGIN_NAMESPACE


class Ui_MainWindow
{
public:
    QWidget* centralwidget;
    QGridLayout* gridLayout;
    QVBoxLayout* menuLayout;
    QHBoxLayout* imageLayout;

    // left: preview + show button
    QVBoxLayout* startShowingLayout;
    QLabel* mainWindowImage;
    QPushButton* startShowingButton;

    // right: realm/map pickers + own image
    QVBoxLayout* chooseImageLayout;
    QVBoxLayout* chooseLayout;
    QVBoxLayout* chooseRealmLayout;
    QLabel* chooseRealmLabel;
    QComboBox* chooseRealmComboBox;
    QVBoxLayout* chooseMapLayout;
    QLabel* chooseMapLabel;
    QComboBox* chooseMapComboBox;
    QPushButton* chooseOwnImageButton;

    // bottom: sliders
    QHBoxLayout* optionsLayout;
    QVBoxLayout* overlayPositionLayout;
    QVBoxLayout* overlayOffsetXLayout;
    QLabel* overlayOffsetXLabel;
    QSlider* overlayOffsetXSlider;
    QVBoxLayout* overlayOffsetYLayout;
    QLabel* overlayOffsetYLabel;
    QSlider* overlayOffsetYSlider;
    QVBoxLayout* overlayOptionsLayout;
    QVBoxLayout* overlaySizeLayout;
    QLabel* overlaySizeLabel;
    QSlider* overlaySizeSlider;
    QVBoxLayout* overlayOpacityLayout;
    QLabel* overlayOpacityLabel;
    QSlider* overlayOpacitySlider;

    // divider
    QFrame* divider;

    void setupUi(QMainWindow* MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(480, 400);
        MainWindow->setMinimumSize(QSize(420, 360));
        //MainWindow->setStyleSheet(QString::fromUtf8(GLOBAL_STYLE));

        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");

        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(14, 14, 14, 14);
        gridLayout->setSpacing(10);

        menuLayout = new QVBoxLayout();
        menuLayout->setObjectName("menuLayout");
        menuLayout->setSpacing(10);

        // top row
        imageLayout = new QHBoxLayout();
        imageLayout->setObjectName("imageLayout");
        imageLayout->setSpacing(12);

        // left column
        startShowingLayout = new QVBoxLayout();
        startShowingLayout->setObjectName("startShowingLayout");
        startShowingLayout->setSpacing(6);

        mainWindowImage = new QLabel(centralwidget);
        mainWindowImage->setObjectName("mainWindowImage");
        QSizePolicy spExpand(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        spExpand.setHorizontalStretch(0);
        spExpand.setVerticalStretch(0);
        mainWindowImage->setSizePolicy(spExpand);
        mainWindowImage->setMinimumSize(QSize(200, 200));
        mainWindowImage->setAlignment(Qt::AlignCenter);
        startShowingLayout->addWidget(mainWindowImage);

        startShowingButton = new QPushButton(centralwidget);
        startShowingButton->setObjectName("startShowingButton");
        QSizePolicy spHExp(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        startShowingButton->setSizePolicy(spHExp);
        startShowingButton->setMinimumSize(QSize(200, 34));
        startShowingButton->setMaximumHeight(34);
        startShowingLayout->addWidget(startShowingButton, 0, Qt::AlignBottom);

        imageLayout->addLayout(startShowingLayout);

        // right column
        chooseImageLayout = new QVBoxLayout();
        chooseImageLayout->setObjectName("chooseImageLayout");
        chooseImageLayout->setSpacing(6);

        chooseLayout = new QVBoxLayout();
        chooseLayout->setObjectName("chooseLayout");
        chooseLayout->setSpacing(8);

        // realm picker
        chooseRealmLayout = new QVBoxLayout();
        chooseRealmLayout->setObjectName("chooseRealmLayout");
        chooseRealmLayout->setSpacing(4);

        chooseRealmLabel = new QLabel(centralwidget);
        chooseRealmLabel->setObjectName("chooseRealmLabel");
        chooseRealmLabel->setMinimumSize(QSize(200, 20));
        chooseRealmLabel->setMaximumSize(QSize(400, 20));
        chooseRealmLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        chooseRealmLayout->addWidget(chooseRealmLabel);

        chooseRealmComboBox = new QComboBox(centralwidget);
        chooseRealmComboBox->setObjectName("chooseRealmComboBox");
        chooseRealmComboBox->setSizePolicy(spHExp);
        chooseRealmComboBox->setMinimumSize(QSize(200, 32));
        chooseRealmComboBox->setMaximumHeight(32);
        chooseRealmLayout->addWidget(chooseRealmComboBox);

        chooseLayout->addLayout(chooseRealmLayout);

        // map picker
        chooseMapLayout = new QVBoxLayout();
        chooseMapLayout->setObjectName("chooseMapLayout");
        chooseMapLayout->setSpacing(4);

        chooseMapLabel = new QLabel(centralwidget);
        chooseMapLabel->setObjectName("chooseMapLabel");
        chooseMapLabel->setMinimumSize(QSize(200, 20));
        chooseMapLabel->setMaximumSize(QSize(400, 20));
        chooseMapLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        chooseMapLayout->addWidget(chooseMapLabel);

        chooseMapComboBox = new QComboBox(centralwidget);
        chooseMapComboBox->setObjectName("chooseMapComboBox");
        chooseMapComboBox->setMinimumSize(QSize(200, 32));
        chooseMapComboBox->setMaximumHeight(32);
        chooseMapComboBox->setSizePolicy(spHExp);
        chooseMapLayout->addWidget(chooseMapComboBox);

        chooseLayout->addLayout(chooseMapLayout);
        chooseImageLayout->addLayout(chooseLayout);

        chooseOwnImageButton = new QPushButton(centralwidget);
        chooseOwnImageButton->setObjectName("chooseOwnImageButton");
        chooseOwnImageButton->setSizePolicy(spHExp);
        chooseOwnImageButton->setMinimumSize(QSize(200, 34));
        chooseOwnImageButton->setMaximumHeight(34);
        chooseImageLayout->addWidget(chooseOwnImageButton, 0, Qt::AlignBottom);

        imageLayout->addLayout(chooseImageLayout);
        menuLayout->addLayout(imageLayout);

        // divider
        divider = new QFrame(centralwidget);
        divider->setObjectName("divider");
        divider->setFrameShape(QFrame::HLine);
        divider->setFrameShadow(QFrame::Plain);
        divider->setStyleSheet("background-color: #1a2132; border: none; max-height: 1px;");
        menuLayout->addWidget(divider);

        // slider row
        optionsLayout = new QHBoxLayout();
        optionsLayout->setObjectName("optionsLayout");
        optionsLayout->setSpacing(16);

        // position sliders
        overlayPositionLayout = new QVBoxLayout();
        overlayPositionLayout->setObjectName("overlayPositionLayout");
        overlayPositionLayout->setSpacing(8);

        auto makeSliderGroup = [&](QVBoxLayout*& groupLayout, QLabel*& lbl,
            const char* lblObjName, QSlider*& slider,
            const char* sliderObjName) {
                groupLayout = new QVBoxLayout();
                groupLayout->setSpacing(4);

                lbl = new QLabel(centralwidget);
                lbl->setObjectName(lblObjName);
                lbl->setMinimumSize(QSize(0, 18));
                lbl->setMaximumHeight(18);
                lbl->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
                groupLayout->addWidget(lbl);

                slider = new QSlider(centralwidget);
                slider->setObjectName(sliderObjName);
                slider->setMinimumSize(QSize(0, 20));
                slider->setMaximumHeight(20);
                slider->setOrientation(Qt::Horizontal);
                groupLayout->addWidget(slider);
            };

        makeSliderGroup(overlayOffsetXLayout, overlayOffsetXLabel,
            "overlayOffsetXLabel", overlayOffsetXSlider, "overlayOffsetXSlider");
        overlayPositionLayout->addLayout(overlayOffsetXLayout);

        makeSliderGroup(overlayOffsetYLayout, overlayOffsetYLabel,
            "overlayOffsetYLabel", overlayOffsetYSlider, "overlayOffsetYSlider");
        overlayPositionLayout->addLayout(overlayOffsetYLayout);

        optionsLayout->addLayout(overlayPositionLayout);

        // size / alpha sliders
        overlayOptionsLayout = new QVBoxLayout();
        overlayOptionsLayout->setObjectName("overlayOptionsLayout");
        overlayOptionsLayout->setSpacing(8);

        makeSliderGroup(overlaySizeLayout, overlaySizeLabel,
            "overlaySizeLabel", overlaySizeSlider, "overlaySizeSlider");
        overlayOptionsLayout->addLayout(overlaySizeLayout);

        makeSliderGroup(overlayOpacityLayout, overlayOpacityLabel,
            "overlayOpacityLabel", overlayOpacitySlider, "overlayOpacitySlider");
        overlayOptionsLayout->addLayout(overlayOpacityLayout);

        optionsLayout->addLayout(overlayOptionsLayout);
        menuLayout->addLayout(optionsLayout);

        gridLayout->addLayout(menuLayout, 0, 0, 1, 1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QMetaObject::connectSlotsByName(MainWindow);
    }

    void retranslateUi(QMainWindow* MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Map Overlay", nullptr));
        mainWindowImage->setText(QCoreApplication::translate("MainWindow", "No image selected", nullptr));
        startShowingButton->setText(QCoreApplication::translate("MainWindow", "Show Overlay", nullptr));
        chooseRealmLabel->setText(QCoreApplication::translate("MainWindow", "Realm", nullptr));
        chooseMapLabel->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        chooseOwnImageButton->setText(QCoreApplication::translate("MainWindow", "Choose Custom Image", nullptr));
        overlayOffsetXLabel->setText(QCoreApplication::translate("MainWindow", "X Offset  0%", nullptr));
        overlayOffsetYLabel->setText(QCoreApplication::translate("MainWindow", "Y Offset  0%", nullptr));
        overlaySizeLabel->setText(QCoreApplication::translate("MainWindow", "Size  0%", nullptr));
        overlayOpacityLabel->setText(QCoreApplication::translate("MainWindow", "Opacity  0%", nullptr));
    }
};

namespace Ui {
    class MainWindow : public Ui_MainWindow {};
}

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H