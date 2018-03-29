#include "SixDegreesofSeperation.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	SixDegreesofSeperation w;
    w.show();
    return a.exec();
}
