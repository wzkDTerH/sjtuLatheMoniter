#include "devlistwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    devListWindow w;
    w.show();

    return a.exec();
}
