#include <QApplication>

#include "example.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(true);

    Example example;

    return a.exec();
}
