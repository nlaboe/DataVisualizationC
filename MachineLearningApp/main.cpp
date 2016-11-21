#include "MachineLearningApp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MachineLearningApp w;
    w.show();

    return a.exec();
}
