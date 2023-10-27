/****************************************************************************
** Meta object code from reading C++ file 'alarm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lab2/alarm.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAlarmENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAlarmENDCLASS = QtMocHelpers::stringData(
    "Alarm",
    "on_timeEdit_userTimeChanged",
    "",
    "time",
    "on_timeEdit_2_userTimeChanged",
    "on_timeEdit_3_userTimeChanged",
    "on_timeEdit_4_userTimeChanged",
    "on_timeEdit_5_userTimeChanged",
    "current_data",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAlarmENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[6];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[30];
    char stringdata5[30];
    char stringdata6[30];
    char stringdata7[30];
    char stringdata8[13];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAlarmENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAlarmENDCLASS_t qt_meta_stringdata_CLASSAlarmENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Alarm"
        QT_MOC_LITERAL(6, 27),  // "on_timeEdit_userTimeChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 4),  // "time"
        QT_MOC_LITERAL(40, 29),  // "on_timeEdit_2_userTimeChanged"
        QT_MOC_LITERAL(70, 29),  // "on_timeEdit_3_userTimeChanged"
        QT_MOC_LITERAL(100, 29),  // "on_timeEdit_4_userTimeChanged"
        QT_MOC_LITERAL(130, 29),  // "on_timeEdit_5_userTimeChanged"
        QT_MOC_LITERAL(160, 12),  // "current_data"
        QT_MOC_LITERAL(173, 21)   // "on_pushButton_clicked"
    },
    "Alarm",
    "on_timeEdit_userTimeChanged",
    "",
    "time",
    "on_timeEdit_2_userTimeChanged",
    "on_timeEdit_3_userTimeChanged",
    "on_timeEdit_4_userTimeChanged",
    "on_timeEdit_5_userTimeChanged",
    "current_data",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAlarmENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    1,   59,    2, 0x08,    3 /* Private */,
       5,    1,   62,    2, 0x08,    5 /* Private */,
       6,    1,   65,    2, 0x08,    7 /* Private */,
       7,    1,   68,    2, 0x08,    9 /* Private */,
       8,    0,   71,    2, 0x08,   11 /* Private */,
       9,    0,   72,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void, QMetaType::QTime,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Alarm::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAlarmENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAlarmENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAlarmENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Alarm, std::true_type>,
        // method 'on_timeEdit_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_2_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_3_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_4_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_timeEdit_5_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'current_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Alarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Alarm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_timeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 1: _t->on_timeEdit_2_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->on_timeEdit_3_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 3: _t->on_timeEdit_4_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 4: _t->on_timeEdit_5_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 5: _t->current_data(); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Alarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Alarm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAlarmENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Alarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
