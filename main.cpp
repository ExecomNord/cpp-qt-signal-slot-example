#include <QApplication>

#include "example.h"

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    application.setQuitOnLastWindowClosed(true);

    Example example;

    return application.exec();
}
