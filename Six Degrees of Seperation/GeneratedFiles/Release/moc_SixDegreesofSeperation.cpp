/****************************************************************************
** Meta object code from reading C++ file 'SixDegreesofSeperation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SixDegreesofSeperation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SixDegreesofSeperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SixDegreesofSeperation_t {
    QByteArrayData data[12];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SixDegreesofSeperation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SixDegreesofSeperation_t qt_meta_stringdata_SixDegreesofSeperation = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SixDegreesofSeperation"
QT_MOC_LITERAL(1, 23, 7), // "exitApp"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "openMoviesDialog"
QT_MOC_LITERAL(4, 49, 16), // "openActorsDialog"
QT_MOC_LITERAL(5, 66, 20), // "openSeperationDialog"
QT_MOC_LITERAL(6, 87, 21), // "openEpisodeInfoDialog"
QT_MOC_LITERAL(7, 109, 9), // "viewMovie"
QT_MOC_LITERAL(8, 119, 9), // "viewActor"
QT_MOC_LITERAL(9, 129, 13), // "setFirstActor"
QT_MOC_LITERAL(10, 143, 14), // "setSecondActor"
QT_MOC_LITERAL(11, 158, 11) // "beginSearch"

    },
    "SixDegreesofSeperation\0exitApp\0\0"
    "openMoviesDialog\0openActorsDialog\0"
    "openSeperationDialog\0openEpisodeInfoDialog\0"
    "viewMovie\0viewActor\0setFirstActor\0"
    "setSecondActor\0beginSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SixDegreesofSeperation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SixDegreesofSeperation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SixDegreesofSeperation *_t = static_cast<SixDegreesofSeperation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->exitApp(); break;
        case 1: _t->openMoviesDialog(); break;
        case 2: _t->openActorsDialog(); break;
        case 3: _t->openSeperationDialog(); break;
        case 4: _t->openEpisodeInfoDialog(); break;
        case 5: _t->viewMovie(); break;
        case 6: _t->viewActor(); break;
        case 7: _t->setFirstActor(); break;
        case 8: _t->setSecondActor(); break;
        case 9: _t->beginSearch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SixDegreesofSeperation::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SixDegreesofSeperation.data,
      qt_meta_data_SixDegreesofSeperation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SixDegreesofSeperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SixDegreesofSeperation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SixDegreesofSeperation.stringdata0))
        return static_cast<void*>(const_cast< SixDegreesofSeperation*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SixDegreesofSeperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
