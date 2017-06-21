#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"
#include "EdsServices.h"
#include "../External/EDSDK/EDSDK.h"
void testsEDSDK()
{
	EdsError err= EdsInitializeSDK();
	EdsCameraRef camera = NULL;
	EdsCameraListRef list=NULL;

	if (err == EDS_ERR_OK)
	{
		EdsGetCameraList(&list);
		
	}

	EdsUInt32 count=0;
	EdsError er=EdsGetChildCount(list, &count);
	qDebug("bailar contigo");

	err = EdsGetChildAtIndex(list, 0, &camera);

	EdsGetChildCount(camera, &count);

	EdsDeviceInfo infoDev;
	EdsGetDeviceInfo(camera, &infoDev);

	EdsTerminateSDK();
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	d3dRecorder w;

	WorkingSession ws;

	ws.dosomething();


	//testsEDSDK();



	w.show();
	return a.exec();
}
