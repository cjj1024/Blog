/****************************************************************************
** Meta object code from reading C++ file 'admininterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LibraryManageSystem/admininterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admininterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminInterface_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminInterface_t qt_meta_stringdata_AdminInterface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AdminInterface"
QT_MOC_LITERAL(1, 15, 16), // "ShowBookInfoSlot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 50, 4), // "item"
QT_MOC_LITERAL(5, 55, 6), // "column"
QT_MOC_LITERAL(6, 62, 11), // "AddBookSlot"
QT_MOC_LITERAL(7, 74, 14), // "DeleteBookSlot"
QT_MOC_LITERAL(8, 89, 11), // "AddUserSlot"
QT_MOC_LITERAL(9, 101, 14), // "DeleteUserSlot"
QT_MOC_LITERAL(10, 116, 12), // "ShowAllBooks"
QT_MOC_LITERAL(11, 129, 12) // "ShowAllUsers"

    },
    "AdminInterface\0ShowBookInfoSlot\0\0"
    "QTreeWidgetItem*\0item\0column\0AddBookSlot\0"
    "DeleteBookSlot\0AddUserSlot\0DeleteUserSlot\0"
    "ShowAllBooks\0ShowAllUsers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminInterface *_t = static_cast<AdminInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ShowBookInfoSlot((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->AddBookSlot(); break;
        case 2: _t->DeleteBookSlot(); break;
        case 3: _t->AddUserSlot(); break;
        case 4: _t->DeleteUserSlot(); break;
        case 5: _t->ShowAllBooks(); break;
        case 6: _t->ShowAllUsers(); break;
        default: ;
        }
    }
}

const QMetaObject AdminInterface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminInterface.data,
      qt_meta_data_AdminInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AdminInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminInterface.stringdata0))
        return static_cast<void*>(const_cast< AdminInterface*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdminInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
