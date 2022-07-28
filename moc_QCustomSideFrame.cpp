/****************************************************************************
** Meta object code from reading C++ file 'QCustomSideFrame.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "QCustomSideFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCustomSideFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCustomSideFrame_t {
    const uint offsetsAndSize[18];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QCustomSideFrame_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QCustomSideFrame_t qt_meta_stringdata_QCustomSideFrame = {
    {
QT_MOC_LITERAL(0, 16), // "QCustomSideFrame"
QT_MOC_LITERAL(17, 12), // "DrawerOpened"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 12), // "DrawerClosed"
QT_MOC_LITERAL(44, 20), // "onHoverEventDetected"
QT_MOC_LITERAL(65, 7), // "QEvent*"
QT_MOC_LITERAL(73, 5), // "event"
QT_MOC_LITERAL(79, 25), // "SideMenuAnimationFinished"
QT_MOC_LITERAL(105, 19) // "onForceDrawerOpened"

    },
    "QCustomSideFrame\0DrawerOpened\0\0"
    "DrawerClosed\0onHoverEventDetected\0"
    "QEvent*\0event\0SideMenuAnimationFinished\0"
    "onForceDrawerOpened"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCustomSideFrame[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   46,    2, 0x08,    3 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCustomSideFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QCustomSideFrame *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DrawerOpened(); break;
        case 1: _t->DrawerClosed(); break;
        case 2: _t->onHoverEventDetected((*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[1]))); break;
        case 3: _t->SideMenuAnimationFinished(); break;
        case 4: _t->onForceDrawerOpened(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QCustomSideFrame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomSideFrame::DrawerOpened)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QCustomSideFrame::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustomSideFrame::DrawerClosed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QCustomSideFrame::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_QCustomSideFrame.offsetsAndSize,
    qt_meta_data_QCustomSideFrame,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QCustomSideFrame_t
, QtPrivate::TypeAndForceComplete<QCustomSideFrame, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QCustomSideFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCustomSideFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCustomSideFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int QCustomSideFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QCustomSideFrame::DrawerOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QCustomSideFrame::DrawerClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
