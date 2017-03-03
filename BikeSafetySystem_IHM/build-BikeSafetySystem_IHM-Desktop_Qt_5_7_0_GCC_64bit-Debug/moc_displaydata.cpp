/****************************************************************************
** Meta object code from reading C++ file 'displaydata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BikeSafetySystem_IHM/displaydata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displaydata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DiplayData_t {
    QByteArrayData data[9];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiplayData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiplayData_t qt_meta_stringdata_DiplayData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DiplayData"
QT_MOC_LITERAL(1, 11, 11), // "speedChange"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "hourChange"
QT_MOC_LITERAL(4, 35, 11), // "minutChange"
QT_MOC_LITERAL(5, 47, 15), // "rearStateChange"
QT_MOC_LITERAL(6, 63, 18), // "commandStateChange"
QT_MOC_LITERAL(7, 82, 9), // "updateIHM"
QT_MOC_LITERAL(8, 92, 10) // "updateData"

    },
    "DiplayData\0speedChange\0\0hourChange\0"
    "minutChange\0rearStateChange\0"
    "commandStateChange\0updateIHM\0updateData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiplayData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       1, QMetaType::QString, 0x00495001,
       3, QMetaType::QString, 0x00495001,
       4, QMetaType::QString, 0x00495001,
       5, QMetaType::QString, 0x00495001,
       6, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void DiplayData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiplayData *_t = static_cast<DiplayData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speedChange(); break;
        case 1: _t->hourChange(); break;
        case 2: _t->minutChange(); break;
        case 3: _t->rearStateChange(); break;
        case 4: _t->commandStateChange(); break;
        case 5: _t->updateIHM(); break;
        case 6: _t->updateData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DiplayData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiplayData::speedChange)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DiplayData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiplayData::hourChange)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DiplayData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiplayData::minutChange)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DiplayData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiplayData::rearStateChange)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DiplayData::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DiplayData::commandStateChange)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DiplayData *_t = static_cast<DiplayData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSpeedChange(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getHourChange(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getMinutChange(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getRearStateChange(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getCommandStateChange(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject DiplayData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DiplayData.data,
      qt_meta_data_DiplayData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DiplayData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiplayData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DiplayData.stringdata0))
        return static_cast<void*>(const_cast< DiplayData*>(this));
    return QObject::qt_metacast(_clname);
}

int DiplayData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DiplayData::speedChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DiplayData::hourChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DiplayData::minutChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DiplayData::rearStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DiplayData::commandStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
