/****************************************************************************
** Meta object code from reading C++ file 'msgBookView.h'
**
** Created: Mon Jul 15 12:57:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "view/msgBookView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'msgBookView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MsgBookView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      23,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MsgBookView[] = {
    "MsgBookView\0\0openMsg()\0deleteMsg()\0"
};

void MsgBookView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MsgBookView *_t = static_cast<MsgBookView *>(_o);
        switch (_id) {
        case 0: _t->openMsg(); break;
        case 1: _t->deleteMsg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MsgBookView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MsgBookView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MsgBookView,
      qt_meta_data_MsgBookView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MsgBookView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MsgBookView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MsgBookView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MsgBookView))
        return static_cast<void*>(const_cast< MsgBookView*>(this));
    if (!strcmp(_clname, "Ui::MsgBookView"))
        return static_cast< Ui::MsgBookView*>(const_cast< MsgBookView*>(this));
    return QDialog::qt_metacast(_clname);
}

int MsgBookView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
