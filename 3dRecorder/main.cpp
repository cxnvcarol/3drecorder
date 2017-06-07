#include "d3dRecorder.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	d3dRecorder w;
	w.show();
	return a.exec();
}
