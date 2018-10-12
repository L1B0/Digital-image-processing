/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 4), // "open"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "save"
QT_MOC_LITERAL(4, 22, 25), // "on_gray_determine_clicked"
QT_MOC_LITERAL(5, 48, 19), // "on_sampling_clicked"
QT_MOC_LITERAL(6, 68, 24), // "on_bitplane_save_clicked"
QT_MOC_LITERAL(7, 93, 27), // "on_threshold_update_clicked"
QT_MOC_LITERAL(8, 121, 20), // "on_line_push_clicked"
QT_MOC_LITERAL(9, 142, 22), // "on_nline_push1_clicked"
QT_MOC_LITERAL(10, 165, 22), // "on_nline_push2_clicked"
QT_MOC_LITERAL(11, 188, 40), // "on_nearest_horizontalSlider_v..."
QT_MOC_LITERAL(12, 229, 5), // "value"
QT_MOC_LITERAL(13, 235, 41), // "on_bilinear_horizontalSlider_..."
QT_MOC_LITERAL(14, 277, 28), // "on_nearest_spin_push_clicked"
QT_MOC_LITERAL(15, 306, 29) // "on_bilinear_spin_push_clicked"

    },
    "MainWindow\0open\0\0save\0on_gray_determine_clicked\0"
    "on_sampling_clicked\0on_bitplane_save_clicked\0"
    "on_threshold_update_clicked\0"
    "on_line_push_clicked\0on_nline_push1_clicked\0"
    "on_nline_push2_clicked\0"
    "on_nearest_horizontalSlider_valueChanged\0"
    "value\0on_bilinear_horizontalSlider_valueChanged\0"
    "on_nearest_spin_push_clicked\0"
    "on_bilinear_spin_push_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->save(); break;
        case 2: _t->on_gray_determine_clicked(); break;
        case 3: _t->on_sampling_clicked(); break;
        case 4: _t->on_bitplane_save_clicked(); break;
        case 5: _t->on_threshold_update_clicked(); break;
        case 6: _t->on_line_push_clicked(); break;
        case 7: _t->on_nline_push1_clicked(); break;
        case 8: _t->on_nline_push2_clicked(); break;
        case 9: _t->on_nearest_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_bilinear_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_nearest_spin_push_clicked(); break;
        case 12: _t->on_bilinear_spin_push_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
