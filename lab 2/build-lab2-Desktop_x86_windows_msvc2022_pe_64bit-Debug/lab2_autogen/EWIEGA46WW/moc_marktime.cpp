/****************************************************************************
** Meta object code from reading C++ file 'marktime.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lab2/marktime.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marktime.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMarkTimeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMarkTimeENDCLASS = QtMocHelpers::stringData(
    "MarkTime",
    "on_Start_timemark_clicked",
    "",
    "Mark_time",
    "on_Stop_button_clicked",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_Go_Alarm_clicked",
    "on_Go_Stopwatch_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMarkTimeENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[23];
    char stringdata5[28];
    char stringdata6[5];
    char stringdata7[20];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMarkTimeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMarkTimeENDCLASS_t qt_meta_stringdata_CLASSMarkTimeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "MarkTime"
        QT_MOC_LITERAL(9, 25),  // "on_Start_timemark_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 9),  // "Mark_time"
        QT_MOC_LITERAL(46, 22),  // "on_Stop_button_clicked"
        QT_MOC_LITERAL(69, 27),  // "on_timeEdit_userTimeChanged"
        QT_MOC_LITERAL(97, 4),  // "time"
        QT_MOC_LITERAL(102, 19),  // "on_Go_Alarm_clicked"
        QT_MOC_LITERAL(122, 23)   // "on_Go_Stopwatch_clicked"
    },
    "MarkTime",
    "on_Start_timemark_clicked",
    "",
    "Mark_time",
    "on_Stop_button_clicked",
    "on_timeEdit_userTimeChanged",
    "time",
    "on_Go_Alarm_clicked",
    "on_Go_Stopwatch_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMarkTimeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    1,   53,    2, 0x08,    4 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    0,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MarkTime::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMarkTimeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMarkTimeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMarkTimeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MarkTime, std::true_type>,
        // method 'on_Start_timemark_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Mark_time'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Stop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_timeEdit_userTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'on_Go_Alarm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Go_Stopwatch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MarkTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MarkTime *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Start_timemark_clicked(); break;
        case 1: _t->Mark_time(); break;
        case 2: _t->on_Stop_button_clicked(); break;
        case 3: _t->on_timeEdit_userTimeChanged((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 4: _t->on_Go_Alarm_clicked(); break;
        case 5: _t->on_Go_Stopwatch_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MarkTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarkTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMarkTimeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MarkTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
