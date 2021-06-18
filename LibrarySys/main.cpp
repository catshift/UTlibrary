#include "LibrarySys.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	

    QApplication a(argc, argv);
    LibrarySys w;
    w.show();
    return a.exec();
}
