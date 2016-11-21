/********************************************************************************
** Form generated from reading UI file 'MachineLearningApp.ui'
**
** Created: Sun Nov 20 20:39:59 2016
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINELEARNINGAPP_H
#define UI_MACHINELEARNINGAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MachineLearningApp
{
public:
    QWidget *centralWidget;
    QTextEdit *filepath_Edit;
    QPushButton *browse_Button;
    QPushButton *run_Button;
    QPushButton *reset_Button;
    QPushButton *run_Button_2;
    QGroupBox *groupBox;
    QLabel *Zvar_label;
    QLabel *Xvar_label;
    QComboBox *X_comboBox;
    QLabel *Yvar_label;
    QComboBox *Y_comboBox;
    QComboBox *Z_comboBox;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *reset_Button_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MachineLearningApp)
    {
        if (MachineLearningApp->objectName().isEmpty())
            MachineLearningApp->setObjectName(QString::fromUtf8("MachineLearningApp"));
        MachineLearningApp->resize(777, 439);
        centralWidget = new QWidget(MachineLearningApp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        filepath_Edit = new QTextEdit(centralWidget);
        filepath_Edit->setObjectName(QString::fromUtf8("filepath_Edit"));
        filepath_Edit->setGeometry(QRect(180, 330, 461, 31));
        browse_Button = new QPushButton(centralWidget);
        browse_Button->setObjectName(QString::fromUtf8("browse_Button"));
        browse_Button->setGeometry(QRect(650, 330, 111, 31));
        run_Button = new QPushButton(centralWidget);
        run_Button->setObjectName(QString::fromUtf8("run_Button"));
        run_Button->setGeometry(QRect(10, 330, 161, 31));
        reset_Button = new QPushButton(centralWidget);
        reset_Button->setObjectName(QString::fromUtf8("reset_Button"));
        reset_Button->setGeometry(QRect(10, 230, 161, 31));
        run_Button_2 = new QPushButton(centralWidget);
        run_Button_2->setObjectName(QString::fromUtf8("run_Button_2"));
        run_Button_2->setGeometry(QRect(10, 150, 161, 31));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 131));
        Zvar_label = new QLabel(groupBox);
        Zvar_label->setObjectName(QString::fromUtf8("Zvar_label"));
        Zvar_label->setGeometry(QRect(10, 90, 20, 20));
        Xvar_label = new QLabel(groupBox);
        Xvar_label->setObjectName(QString::fromUtf8("Xvar_label"));
        Xvar_label->setGeometry(QRect(10, 30, 20, 20));
        X_comboBox = new QComboBox(groupBox);
        X_comboBox->setObjectName(QString::fromUtf8("X_comboBox"));
        X_comboBox->setGeometry(QRect(30, 30, 121, 22));
        Yvar_label = new QLabel(groupBox);
        Yvar_label->setObjectName(QString::fromUtf8("Yvar_label"));
        Yvar_label->setGeometry(QRect(10, 60, 20, 20));
        Y_comboBox = new QComboBox(groupBox);
        Y_comboBox->setObjectName(QString::fromUtf8("Y_comboBox"));
        Y_comboBox->setGeometry(QRect(30, 60, 121, 22));
        Z_comboBox = new QComboBox(groupBox);
        Z_comboBox->setObjectName(QString::fromUtf8("Z_comboBox"));
        Z_comboBox->setGeometry(QRect(30, 90, 121, 21));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(180, 20, 581, 301));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 161, 51));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 16));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(110, 20, 42, 22));
        reset_Button_2 = new QPushButton(centralWidget);
        reset_Button_2->setObjectName(QString::fromUtf8("reset_Button_2"));
        reset_Button_2->setGeometry(QRect(10, 190, 161, 31));
        MachineLearningApp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MachineLearningApp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 26));
        MachineLearningApp->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MachineLearningApp);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MachineLearningApp->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MachineLearningApp);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MachineLearningApp->setStatusBar(statusBar);

        retranslateUi(MachineLearningApp);

        QMetaObject::connectSlotsByName(MachineLearningApp);
    } // setupUi

    void retranslateUi(QMainWindow *MachineLearningApp)
    {
        MachineLearningApp->setWindowTitle(QApplication::translate("MachineLearningApp", "Test001", 0, QApplication::UnicodeUTF8));
        browse_Button->setText(QApplication::translate("MachineLearningApp", "Browse...", 0, QApplication::UnicodeUTF8));
        run_Button->setText(QApplication::translate("MachineLearningApp", "Process Dataset", 0, QApplication::UnicodeUTF8));
        reset_Button->setText(QApplication::translate("MachineLearningApp", "Reset...", 0, QApplication::UnicodeUTF8));
        run_Button_2->setText(QApplication::translate("MachineLearningApp", "Plot...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MachineLearningApp", "Select 3 Features", 0, QApplication::UnicodeUTF8));
        Zvar_label->setText(QApplication::translate("MachineLearningApp", "Z", 0, QApplication::UnicodeUTF8));
        Xvar_label->setText(QApplication::translate("MachineLearningApp", "X", 0, QApplication::UnicodeUTF8));
        Yvar_label->setText(QApplication::translate("MachineLearningApp", "Y", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MachineLearningApp", "Cross-Validation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MachineLearningApp", "Number of Folds:", 0, QApplication::UnicodeUTF8));
        reset_Button_2->setText(QApplication::translate("MachineLearningApp", "PCA...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MachineLearningApp: public Ui_MachineLearningApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELEARNINGAPP_H
