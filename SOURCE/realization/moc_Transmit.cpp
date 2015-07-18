/****************************************************************************
** Meta object code from reading C++ file 'Transmit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Transmit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Transmit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Transmit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      45,   28,    9,    9, 0x08,
      85,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Transmit[] = {
    "Transmit\0\0TransTableClear()\0"
    "ID,DLC,DATA,time\0"
    "SendSlot(QString,QString,QString,QTime)\0"
    "TransTableSave()\0"
};

void Transmit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Transmit *_t = static_cast<Transmit *>(_o);
        switch (_id) {
        case 0: _t->TransTableClear(); break;
        case 1: _t->SendSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QTime(*)>(_a[4]))); break;
        case 2: _t->TransTableSave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Transmit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Transmit::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_Transmit,
      qt_meta_data_Transmit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Transmit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Transmit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Transmit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Transmit))
        return static_cast<void*>(const_cast< Transmit*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int Transmit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
