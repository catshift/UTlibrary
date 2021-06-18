/****************************************************************************
** Meta object code from reading C++ file 'inn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Inner_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Inner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Inner_t qt_meta_stringdata_Inner = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Inner"
QT_MOC_LITERAL(1, 6, 21), // "mousePressSeatchEvent"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "mousePressLoginEvent"
QT_MOC_LITERAL(4, 50, 22), // "mousePressInBoundEvent"
QT_MOC_LITERAL(5, 73, 19), // "mousePressLendEvent"
QT_MOC_LITERAL(6, 93, 21), // "mousePressReturnEvent"
QT_MOC_LITERAL(7, 115, 16) // "mouseManageEvent"

    },
    "Inner\0mousePressSeatchEvent\0\0"
    "mousePressLoginEvent\0mousePressInBoundEvent\0"
    "mousePressLendEvent\0mousePressReturnEvent\0"
    "mouseManageEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Inner[] = {

 // content:
       8,       // revision
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

void Inner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Inner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressSeatchEvent(); break;
        case 1: _t->mousePressLoginEvent(); break;
        case 2: _t->mousePressInBoundEvent(); break;
        case 3: _t->mousePressLendEvent(); break;
        case 4: _t->mousePressReturnEvent(); break;
        case 5: _t->mouseManageEvent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Inner::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Inner.data,
    qt_meta_data_Inner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Inner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Inner.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Inner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
