/****************************************************************************
** Meta object code from reading C++ file 'http_network.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../net_workAccessManager/http_network.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'http_network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_http_network_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_http_network_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_http_network_t qt_meta_stringdata_http_network = {
    {
QT_MOC_LITERAL(0, 0, 12), // "http_network"
QT_MOC_LITERAL(1, 13, 11), // "onReadyRead"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "onError"
QT_MOC_LITERAL(4, 34, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 62, 5), // "error"
QT_MOC_LITERAL(6, 68, 10), // "onFinished"
QT_MOC_LITERAL(7, 79, 10), // "onSslError"
QT_MOC_LITERAL(8, 90, 16) // "QList<QSslError>"

    },
    "http_network\0onReadyRead\0\0onError\0"
    "QNetworkReply::NetworkError\0error\0"
    "onFinished\0onSslError\0QList<QSslError>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_http_network[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x0a /* Public */,
       7,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void http_network::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        http_network *_t = static_cast<http_network *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReadyRead(); break;
        case 1: _t->onError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->onFinished(); break;
        case 3: _t->onSslError((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject http_network::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_http_network.data,
      qt_meta_data_http_network,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *http_network::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *http_network::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_http_network.stringdata0))
        return static_cast<void*>(const_cast< http_network*>(this));
    return QObject::qt_metacast(_clname);
}

int http_network::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
