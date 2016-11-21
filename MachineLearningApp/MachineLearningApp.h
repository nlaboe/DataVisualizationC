#ifndef MachineLearningApp_H
#define MachineLearningApp_H
#include <QMainWindow>
#include <QPushButton>
#include <QFileDialog>

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
    void StoreData(QVector< QVector<double> > &filedata, QString datarow);
    void Features_Menu(QString FeatureString);
    QString Browse_File();

private:
    Ui::MachineLearningApp *ui;
    QString OrigDataFile_;
    QVector<QString> Features_[1];
    QVector<double> RawData_[1];

private slots:
    void Browse_Click();
    void ResetAll();
    void PlotData(QString demodata);
    void Run_Trainer();
};

#endif // MachineLearningApp_H
