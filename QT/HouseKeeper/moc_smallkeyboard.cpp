/****************************************************************************
** Meta object code from reading C++ file 'smallkeyboard.h'
**
** Created: Mon Jul 15 12:58:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/smallkeyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smallkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SmallKeyboard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      33,   14,   14,   14, 0x08,
      46,   14,   14,   14, 0x08,
      58,   14,   14,   14, 0x08,
      71,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SmallKeyboard[] = {
    "SmallKeyboard\0\0clickTextButton()\0"
    "clickSpace()\0clickBack()\0clickClear()\0"
    "clickNextLine()\0"
};

void SmallKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SmallKeyboard *_t = static_cast<SmallKeyboard *>(_o);
        switch (_id) {
        case 0: _t->clickTextButton(); break;
        case 1: _t->clickSpace(); break;
        case 2: _t->clickBack(); break;
        case 3: _t->clickClear(); break;
        case 4: _t->clickNextLine(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SmallKeyboard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SmallKeyboard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SmallKeyboard,
      qt_meta_data_SmallKeyboard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SmallKeyboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SmallKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SmallKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SmallKeyboard))
        return static_cast<void*>(const_cast< SmallKeyboard*>(this));
    if (!strcmp(_clname, "Ui::SmallKeyboard"))
        return static_cast< Ui::SmallKeyboard*>(const_cast< SmallKeyboard*>(this));
    return QDialog::qt_metacast(_clname);
}

int SmallKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
