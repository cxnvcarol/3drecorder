#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"
#include "EDSWrapper.h"
#include "../External/EDSDK/EDSDK.h"

/*
//TODO TRY THIS:

http://doc.qt.io/qt-5/qtwidgets-widgets-imageviewer-main-cpp.html
*/
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

	//TODO open second window and display in fullscreen!

	WorkingSession ws;
	EDSWrapper eds;

	
	int cc=eds.getCameraCount();
	
	qDebug("Canons: %d", cc);
	eds.sampleRun();


	w.show();
	//return 0;
	return a.exec();
}
