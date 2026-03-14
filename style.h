#pragma once

inline const char* GLOBAL_STYLE = R"(
QMainWindow, QWidget {
    background-color: #0f1117;
    color: #e0e6f0;
    font-family: "Segoe UI", "SF Pro Display", sans-serif;
    font-size: 12px;
}

QLabel {
    color: #8a95a8;
    font-size: 11px;
    font-weight: 600;
    letter-spacing: 0.08em;
    background: transparent;
}

QLabel#mainWindowImage {
    background-color: #161b25;
    border: 1px solid #1e2535;
    border-radius: 6px;
    color: #2e3a50;
    font-size: 13px;
    font-weight: 400;
}

QComboBox {
    background-color: #161b25;
    border: 1px solid #2a3448;
    border-radius: 5px;
    color: #c8d4e8;
    padding: 0 10px;
    font-size: 12px;
    selection-background-color: #0d9fce;
}

QComboBox:hover {
    border-color: #0d9fce;
    background-color: #1a2030;
}

QComboBox:on {
    border-color: #0abde3;
    background-color: #1a2030;
}

QComboBox::drop-down {
    subcontrol-origin: padding;
    subcontrol-position: top right;
    width: 24px;
    border-left: 1px solid #2a3448;
    border-top-right-radius: 5px;
    border-bottom-right-radius: 5px;
    background-color: #1e2535;
}

QComboBox::down-arrow {
    width: 8px;
    height: 8px;
    image: none;
    border-left: 4px solid transparent;
    border-right: 4px solid transparent;
    border-top: 5px solid #0abde3;
}

QComboBox QAbstractItemView {
    background-color: #161b25;
    border: 1px solid #0abde3;
    border-radius: 0px;
    color: #c8d4e8;
    selection-background-color: #0a2a3a;
    selection-color: #0abde3;
    outline: none;
    padding: 2px;
}

QPushButton {
    border-radius: 5px;
    font-size: 12px;
    font-weight: 600;
    letter-spacing: 0.06em;
    padding: 0 14px;
    color: #c8d4e8;
    background-color: #1e2535;
    border: 1px solid #2a3448;
}

QPushButton:hover {
    background-color: #242d40;
    border-color: #3a4a60;
}

QPushButton#startShowingButton {
    background-color: #0a7a3e;
    color: #d4f5e4;
    border: 1px solid #0d9f50;
}

QPushButton#startShowingButton:hover {
    background-color: #0d9f50;
    border-color: #12c462;
}

QPushButton#startShowingButton:pressed {
    background-color: #085e30;
}

QPushButton#chooseOwnImageButton {
    background-color: #1a0e3a;
    color: #c5b4f5;
    border: 1px solid #5230b0;
}

QPushButton#chooseOwnImageButton:hover {
    background-color: #251455;
    border-color: #7a52e0;
    color: #ddd0ff;
}

QPushButton#chooseOwnImageButton:pressed {
    background-color: #110a28;
}

QSlider::groove:horizontal {
    height: 4px;
    background-color: #1e2535;
    border-radius: 2px;
    margin: 0px;
}

QSlider::handle:horizontal {
    background-color: #0abde3;
    border: 2px solid #0abde3;
    width: 14px;
    height: 14px;
    border-radius: 7px;
    margin: -5px 0;
}

QSlider::handle:horizontal:hover {
    background-color: #39d0f0;
    border-color: #39d0f0;
}

QSlider::sub-page:horizontal {
    background-color: #0abde3;
    border-radius: 2px;
    height: 4px;
}

QScrollBar:vertical {
    background: #0f1117;
    width: 8px;
    border-radius: 4px;
}

QScrollBar::handle:vertical {
    background: #2a3448;
    border-radius: 4px;
    min-height: 20px;
}

QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
    height: 0px;
}
)";