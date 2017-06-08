#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	d3dRecorder w;

	WorkingSession ws;

	ws.dosomething();

	w.show();
	return a.exec();
}
