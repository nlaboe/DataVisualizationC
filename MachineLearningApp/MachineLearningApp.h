#ifndef MachineLearningApp_H
#define MachineLearningApp_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MachineLearningApp;
}

class MachineLearningApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MachineLearningApp(QWidget *parent = 0);
    ~MachineLearningApp();

    void getButton();
    void ProcFile();
    void Features_Menu(QString FeatureString);
    QString Browse_File();

private:
    Ui::MachineLearningApp *ui;
    QString OrigDataFile_;
    QVector<QString> Features_[4];
    QVector<double> RawData_[4][4];

private slots:
    void Browse_Click();
    void ResetAll();
    void PlotData();
    void Run_Trainer();
};

#endif // MachineLearningApp_H
