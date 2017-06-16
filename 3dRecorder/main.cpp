#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"

#include "../External/EDSDK/EDSDK.h"

void testsEDSDK()
{
	EdsInitializeSDK();
	EdsCameraListRef *list;
	
	EdsGetCameraList(list);
	qDebug("QUIERO");

	EdsUInt32 *count=0;
	EdsError er=EdsGetChildCount(*list, count);
	qDebug("bailar contigo");

	EdsTerminateSDK();
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	d3dRecorder w;

	WorkingSession ws;

	ws.dosomething();


	testsEDSDK();


	w.show();
	return a.exec();
}
