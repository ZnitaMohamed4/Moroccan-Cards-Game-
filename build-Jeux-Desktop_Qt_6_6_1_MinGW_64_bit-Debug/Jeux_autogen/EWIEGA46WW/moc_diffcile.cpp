/****************************************************************************
** Meta object code from reading C++ file 'diffcile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Jeux/diffcile.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diffcile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSDiffcileENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDiffcileENDCLASS = QtMocHelpers::stringData(
    "Diffcile",
    "checkGameFini",
    "",
    "BoutonDeckClicke",
    "updateBoutonOrdi",
    "jeuxfini",
    "updateUIAfterScore"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDiffcileENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDiffcileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDiffcileENDCLASS_t qt_meta_stringdata_CLASSDiffcileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Diffcile"
        QT_MOC_LITERAL(9, 13),  // "checkGameFini"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "BoutonDeckClicke"
        QT_MOC_LITERAL(41, 16),  // "updateBoutonOrdi"
        QT_MOC_LITERAL(58, 8),  // "jeuxfini"
        QT_MOC_LITERAL(67, 18)   // "updateUIAfterScore"
    },
    "Diffcile",
    "checkGameFini",
    "",
    "BoutonDeckClicke",
    "updateBoutonOrdi",
    "jeuxfini",
    "updateUIAfterScore"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDiffcileENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Diffcile::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSDiffcileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDiffcileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDiffcileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Diffcile, std::true_type>,
        // method 'checkGameFini'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'BoutonDeckClicke'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBoutonOrdi'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jeuxfini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUIAfterScore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Diffcile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Diffcile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->checkGameFini();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->BoutonDeckClicke(); break;
        case 2: _t->updateBoutonOrdi(); break;
        case 3: _t->jeuxfini(); break;
        case 4: _t->updateUIAfterScore(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (Diffcile::*)();
            if (_t _q_method = &Diffcile::checkGameFini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Diffcile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Diffcile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDiffcileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Diffcile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
int Diffcile::checkGameFini()
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
