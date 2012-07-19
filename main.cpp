#include <QtGui/QApplication>
#include "amiga.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    amiga w;
    w.show();
    
    return a.exec();
}
