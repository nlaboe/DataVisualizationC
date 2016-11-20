#include "MachineLearningApp.h"
#include "data2plot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MachineLearningApp w;
    w.show();



    return a.exec();
}
