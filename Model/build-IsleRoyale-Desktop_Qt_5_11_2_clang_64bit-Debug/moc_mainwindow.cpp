/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Code/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[12];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(4, 56, 24), // "on_setRunNr_valueChanged"
QT_MOC_LITERAL(5, 81, 4), // "arg1"
QT_MOC_LITERAL(6, 86, 32), // "on_setWolfMortality_valueChanged"
QT_MOC_LITERAL(7, 119, 33), // "on_setMooseMortality_valueCha..."
QT_MOC_LITERAL(8, 153, 40), // "on_setStartingWolfAbundance_v..."
QT_MOC_LITERAL(9, 194, 41), // "on_setStartingMooseAbundance_..."
QT_MOC_LITERAL(10, 236, 34), // "on_varyShownReplicate_valueCh..."
QT_MOC_LITERAL(11, 271, 40) // "on_setMooseCarryingCapacity_v..."

    },
    "MainWindow\0on_runButton_clicked\0\0"
    "on_closeButton_clicked\0on_setRunNr_valueChanged\0"
    "arg1\0on_setWolfMortality_valueChanged\0"
    "on_setMooseMortality_valueChanged\0"
    "on_setStartingWolfAbundance_valueChanged\0"
    "on_setStartingMooseAbundance_valueChanged\0"
    "on_varyShownReplicate_valueChanged\0"
    "on_setMooseCarryingCapacity_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_runButton_clicked(); break;
        case 1: _t->on_closeButton_clicked(); break;
        case 2: _t->on_setRunNr_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_setWolfMortality_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_setMooseMortality_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_setStartingWolfAbundance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_setStartingMooseAbundance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_varyShownReplicate_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_setMooseCarryingCapacity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE