/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "toggleOverlay",
    "",
    "resizeOverlay",
    "moveOverlay",
    "getMaps",
    "index",
    "pickMap",
    "chooseOwnImage",
    "setImage",
    "url",
    "setOverlayOffsetX",
    "offset",
    "setOverlayOffsetY",
    "setOverlaySize",
    "size",
    "setOverlayOpacity",
    "opacity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[12];
    char stringdata5[8];
    char stringdata6[6];
    char stringdata7[8];
    char stringdata8[15];
    char stringdata9[9];
    char stringdata10[4];
    char stringdata11[18];
    char stringdata12[7];
    char stringdata13[18];
    char stringdata14[15];
    char stringdata15[5];
    char stringdata16[18];
    char stringdata17[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 13),  // "toggleOverlay"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 13),  // "resizeOverlay"
        QT_MOC_LITERAL(40, 11),  // "moveOverlay"
        QT_MOC_LITERAL(52, 7),  // "getMaps"
        QT_MOC_LITERAL(60, 5),  // "index"
        QT_MOC_LITERAL(66, 7),  // "pickMap"
        QT_MOC_LITERAL(74, 14),  // "chooseOwnImage"
        QT_MOC_LITERAL(89, 8),  // "setImage"
        QT_MOC_LITERAL(98, 3),  // "url"
        QT_MOC_LITERAL(102, 17),  // "setOverlayOffsetX"
        QT_MOC_LITERAL(120, 6),  // "offset"
        QT_MOC_LITERAL(127, 17),  // "setOverlayOffsetY"
        QT_MOC_LITERAL(145, 14),  // "setOverlaySize"
        QT_MOC_LITERAL(160, 4),  // "size"
        QT_MOC_LITERAL(165, 17),  // "setOverlayOpacity"
        QT_MOC_LITERAL(183, 7)   // "opacity"
    },
    "MainWindow",
    "toggleOverlay",
    "",
    "resizeOverlay",
    "moveOverlay",
    "getMaps",
    "index",
    "pickMap",
    "chooseOwnImage",
    "setImage",
    "url",
    "setOverlayOffsetX",
    "offset",
    "setOverlayOffsetY",
    "setOverlaySize",
    "size",
    "setOverlayOpacity",
    "opacity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    1 /* Public */,
       3,    0,   81,    2, 0x0a,    2 /* Public */,
       4,    0,   82,    2, 0x0a,    3 /* Public */,
       5,    1,   83,    2, 0x0a,    4 /* Public */,
       7,    0,   86,    2, 0x0a,    6 /* Public */,
       8,    0,   87,    2, 0x0a,    7 /* Public */,
       9,    1,   88,    2, 0x0a,    8 /* Public */,
      11,    1,   91,    2, 0x0a,   10 /* Public */,
      13,    1,   94,    2, 0x0a,   12 /* Public */,
      14,    1,   97,    2, 0x0a,   14 /* Public */,
      16,    1,  100,    2, 0x0a,   16 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'toggleOverlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resizeOverlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveOverlay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getMaps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'pickMap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'chooseOwnImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'setOverlayOffsetX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'setOverlayOffsetY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'setOverlaySize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'setOverlayOpacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleOverlay(); break;
        case 1: _t->resizeOverlay(); break;
        case 2: _t->moveOverlay(); break;
        case 3: _t->getMaps((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->pickMap(); break;
        case 5: _t->chooseOwnImage(); break;
        case 6: _t->setImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setOverlayOffsetX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setOverlayOffsetY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setOverlaySize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->setOverlayOpacity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
