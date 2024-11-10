/****************************************************************************
** Meta object code from reading C++ file 'field.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Simulation/field.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Field_t {
    const uint offsetsAndSize[20];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Field_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Field_t qt_meta_stringdata_Field = {
    {
QT_MOC_LITERAL(0, 5), // "Field"
QT_MOC_LITERAL(6, 17), // "signalChangeField"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 9), // "Object***"
QT_MOC_LITERAL(35, 4), // "grid"
QT_MOC_LITERAL(40, 14), // "signalTimeLive"
QT_MOC_LITERAL(55, 5), // "value"
QT_MOC_LITERAL(61, 16), // "signalSaveGenoms"
QT_MOC_LITERAL(78, 18), // "QList<QList<int>>&"
QT_MOC_LITERAL(97, 12) // "saved_genoms"

    },
    "Field\0signalChangeField\0\0Object***\0"
    "grid\0signalTimeLive\0value\0signalSaveGenoms\0"
    "QList<QList<int>>&\0saved_genoms"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Field[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       5,    1,   35,    2, 0x06,    3 /* Public */,
       7,    1,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Field::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Field *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalChangeField((*reinterpret_cast< std::add_pointer_t<Object***>>(_a[1]))); break;
        case 1: _t->signalTimeLive((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->signalSaveGenoms((*reinterpret_cast< std::add_pointer_t<QList<QList<int>>&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Field::*)(Object * * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Field::signalChangeField)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Field::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Field::signalTimeLive)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Field::*)(QVector<QVector<int>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Field::signalSaveGenoms)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Field::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Field.offsetsAndSize,
    qt_meta_data_Field,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Field_t
, QtPrivate::TypeAndForceComplete<Field, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Object * * *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QVector<int>> &, std::false_type>



>,
    nullptr
} };


const QMetaObject *Field::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Field::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Field.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Field::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Field::signalChangeField(Object * * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Field::signalTimeLive(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Field::signalSaveGenoms(QVector<QVector<int>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
