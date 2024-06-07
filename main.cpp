#include "todoappsclass.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToDoAppsClass w;
    w.show();
    return a.exec();
}
