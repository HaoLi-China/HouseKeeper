/****************************************************************************
** Meta object code from reading C++ file 'environment.h'
**
** Created: Tue Jul 16 11:38:05 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/environment.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'environment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Environment[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      33,   12,   12,   12, 0x0a,
      50,   12,   12,   12, 0x0a,
      67,   12,   12,   12, 0x0a,
      85,   12,   12,   12, 0x0a,
      99,   12,   12,   12, 0x0a,
     115,   12,   12,   12, 0x0a,
     128,   12,   12,   12, 0x0a,
     143,   12,   12,   12, 0x0a,
     160,   12,   12,   12, 0x0a,
     177,   12,   12,   12, 0x0a,
     194,   12,   12,   12, 0x0a,
     211,   12,   12,   12, 0x0a,
     228,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Environment[] = {
    "Environment\0\0slot_showHumiture()\0"
    "slot_showGraph()\0slot_showTable()\0"
    "slot_updateTime()\0slot_people()\0"
    "slot_nopeople()\0slot_smoke()\0"
    "slot_nosmoke()\0slot_hum(double)\0"
    "slot_tem(double)\0slot_thNotWork()\0"
    "slot_plNotWork()\0slot_skNotWork()\0"
    "timeout_slot()\0"
};

void Environment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Environment *_t = static_cast<Environment *>(_o);
        switch (_id) {
        case 0: _t->slot_showHumiture(); break;
        case 1: _t->slot_showGraph(); break;
        case 2: _t->slot_showTable(); break;
        case 3: _t->slot_updateTime(); break;
        case 4: _t->slot_people(); break;
        case 5: _t->slot_nopeople(); break;
        case 6: _t->slot_smoke(); break;
        case 7: _t->slot_nosmoke(); break;
        case 8: _t->slot_hum((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->slot_tem((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->slot_thNotWork(); break;
        case 11: _t->slot_plNotWork(); break;
        case 12: _t->slot_skNotWork(); break;
        case 13: _t->timeout_slot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Environment::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Environment::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Environment,
      qt_meta_data_Environment, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Environment::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Environment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Environment::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Environment))
        return static_cast<void*>(const_cast< Environment*>(this));
    if (!strcmp(_clname, "Ui::Environment"))
        return static_cast< Ui::Environment*>(const_cast< Environment*>(this));
    return QWidget::qt_metacast(_clname);
}

int Environment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
