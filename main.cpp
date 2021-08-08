#include "qtempdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTempDialog w;
    w.show();
    return a.exec();
}
