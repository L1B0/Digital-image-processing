/****************************************************************************
** Meta object code from reading C++ file 'mywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mywidget_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mywidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mywidget_t qt_meta_stringdata_mywidget = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mywidget"
QT_MOC_LITERAL(1, 9, 15), // "saveSlotClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "applySlotClicked"
QT_MOC_LITERAL(4, 43, 16), // "houghSlotClicked"
QT_MOC_LITERAL(5, 60, 24), // "huffmanCodingSlotClicked"
QT_MOC_LITERAL(6, 85, 26), // "runLengthCodingSlotClicked"
QT_MOC_LITERAL(7, 112, 26) // "marginalClosureSlotClicked"

    },
    "mywidget\0saveSlotClicked\0\0applySlotClicked\0"
    "houghSlotClicked\0huffmanCodingSlotClicked\0"
    "runLengthCodingSlotClicked\0"
    "marginalClosureSlotClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mywidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mywidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mywidget *_t = static_cast<mywidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveSlotClicked(); break;
        case 1: _t->applySlotClicked(); break;
        case 2: _t->houghSlotClicked(); break;
        case 3: _t->huffmanCodingSlotClicked(); break;
        case 4: _t->runLengthCodingSlotClicked(); break;
        case 5: _t->marginalClosureSlotClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject mywidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mywidget.data,
      qt_meta_data_mywidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *mywidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mywidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mywidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mywidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
