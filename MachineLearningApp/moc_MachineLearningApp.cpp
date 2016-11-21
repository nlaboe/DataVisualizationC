/****************************************************************************
** Meta object code from reading C++ file 'MachineLearningApp.h'
**
** Created: Sun Nov 20 20:40:07 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MachineLearningApp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MachineLearningApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MachineLearningApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      35,   19,   19,   19, 0x08,
      55,   46,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MachineLearningApp[] = {
    "MachineLearningApp\0\0Browse_Click()\0"
    "ResetAll()\0demodata\0PlotData(QString)\0"
    "Run_Trainer()\0"
};

void MachineLearningApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MachineLearningApp *_t = static_cast<MachineLearningApp *>(_o);
        switch (_id) {
        case 0: _t->Browse_Click(); break;
        case 1: _t->ResetAll(); break;
        case 2: _t->PlotData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->Run_Trainer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MachineLearningApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MachineLearningApp::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MachineLearningApp,
      qt_meta_data_MachineLearningApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MachineLearningApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MachineLearningApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MachineLearningApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MachineLearningApp))
        return static_cast<void*>(const_cast< MachineLearningApp*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MachineLearningApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
