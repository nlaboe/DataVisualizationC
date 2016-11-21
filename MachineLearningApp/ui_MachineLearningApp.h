/********************************************************************************
** Form generated from reading UI file 'MachineLearningApp.ui'
**
** Created: Sun Nov 20 20:22:55 2016
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
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
    QRadioButton *test_Radio;
    QRadioButton *train_Radio;
    QPushButton *run_Button;
    QComboBox *X_comboBox;
    QComboBox *Y_comboBox;
    QComboBox *Z_comboBox;
    QLabel *Xvar_label;
    QLabel *Yvar_label;
    QLabel *Zvar_label;
    QLabel *PlotterTitle;
    QPushButton *reset_Button;
    QPushButton *run_Button_2;
    QTextBrowser *datawindow_textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MachineLearningApp)
    {
        if (MachineLearningApp->objectName().isEmpty())
            MachineLearningApp->setObjectName(QString::fromUtf8("MachineLearningApp"));
        MachineLearningApp->resize(777, 377);
        centralWidget = new QWidget(MachineLearningApp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        filepath_Edit = new QTextEdit(centralWidget);
        filepath_Edit->setObjectName(QString::fromUtf8("filepath_Edit"));
        filepath_Edit->setGeometry(QRect(150, 280, 401, 31));
        browse_Button = new QPushButton(centralWidget);
        browse_Button->setObjectName(QString::fromUtf8("browse_Button"));
        browse_Button->setGeometry(QRect(560, 280, 91, 31));
        test_Radio = new QRadioButton(centralWidget);
        test_Radio->setObjectName(QString::fromUtf8("test_Radio"));
        test_Radio->setGeometry(QRect(30, 180, 95, 20));
        train_Radio = new QRadioButton(centralWidget);
        train_Radio->setObjectName(QString::fromUtf8("train_Radio"));
        train_Radio->setGeometry(QRect(30, 210, 95, 20));
        run_Button = new QPushButton(centralWidget);
        run_Button->setObjectName(QString::fromUtf8("run_Button"));
        run_Button->setGeometry(QRect(10, 280, 131, 31));
        X_comboBox = new QComboBox(centralWidget);
        X_comboBox->setObjectName(QString::fromUtf8("X_comboBox"));
        X_comboBox->setGeometry(QRect(30, 40, 111, 22));
        Y_comboBox = new QComboBox(centralWidget);
        Y_comboBox->setObjectName(QString::fromUtf8("Y_comboBox"));
        Y_comboBox->setGeometry(QRect(30, 70, 111, 22));
        Z_comboBox = new QComboBox(centralWidget);
        Z_comboBox->setObjectName(QString::fromUtf8("Z_comboBox"));
        Z_comboBox->setGeometry(QRect(30, 100, 111, 21));
        Xvar_label = new QLabel(centralWidget);
        Xvar_label->setObjectName(QString::fromUtf8("Xvar_label"));
        Xvar_label->setGeometry(QRect(10, 40, 20, 20));
        Yvar_label = new QLabel(centralWidget);
        Yvar_label->setObjectName(QString::fromUtf8("Yvar_label"));
        Yvar_label->setGeometry(QRect(10, 70, 20, 20));
        Zvar_label = new QLabel(centralWidget);
        Zvar_label->setObjectName(QString::fromUtf8("Zvar_label"));
        Zvar_label->setGeometry(QRect(10, 100, 20, 20));
        PlotterTitle = new QLabel(centralWidget);
        PlotterTitle->setObjectName(QString::fromUtf8("PlotterTitle"));
        PlotterTitle->setGeometry(QRect(10, 20, 111, 16));
        reset_Button = new QPushButton(centralWidget);
        reset_Button->setObjectName(QString::fromUtf8("reset_Button"));
        reset_Button->setGeometry(QRect(660, 280, 91, 31));
        run_Button_2 = new QPushButton(centralWidget);
        run_Button_2->setObjectName(QString::fromUtf8("run_Button_2"));
        run_Button_2->setGeometry(QRect(10, 240, 131, 31));
        datawindow_textBrowser = new QTextBrowser(centralWidget);
        datawindow_textBrowser->setObjectName(QString::fromUtf8("datawindow_textBrowser"));
        datawindow_textBrowser->setGeometry(QRect(150, 21, 601, 251));
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
        test_Radio->setText(QApplication::translate("MachineLearningApp", "Test Mode", 0, QApplication::UnicodeUTF8));
        train_Radio->setText(QApplication::translate("MachineLearningApp", "Train Mode", 0, QApplication::UnicodeUTF8));
        run_Button->setText(QApplication::translate("MachineLearningApp", "Run...", 0, QApplication::UnicodeUTF8));
        Xvar_label->setText(QApplication::translate("MachineLearningApp", "X", 0, QApplication::UnicodeUTF8));
        Yvar_label->setText(QApplication::translate("MachineLearningApp", "Y", 0, QApplication::UnicodeUTF8));
        Zvar_label->setText(QApplication::translate("MachineLearningApp", "Z", 0, QApplication::UnicodeUTF8));
        PlotterTitle->setText(QApplication::translate("MachineLearningApp", "Plot 3 Features", 0, QApplication::UnicodeUTF8));
        reset_Button->setText(QApplication::translate("MachineLearningApp", "Reset...", 0, QApplication::UnicodeUTF8));
        run_Button_2->setText(QApplication::translate("MachineLearningApp", "Plot...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MachineLearningApp: public Ui_MachineLearningApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELEARNINGAPP_H
