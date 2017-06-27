#include "d3dRecorder.h"
//#include <QtWidgets/QApplication>
#include "WorkingSession.h"
#include "EDSWrapper.h"
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

	err = EdsGetChildAtIndex(list, 0, &camera);

	EdsGetChildCount(camera, &count);

	EdsDeviceInfo infoDev;
	EdsGetDeviceInfo(camera, &infoDev);

	EdsTerminateSDK();
}

int main(int argc, char *argv[])
{
	//QApplication a(argc, argv);
	//d3dRecorder w;

	WorkingSession ws;
	EDSWrapper eds;

	
	int cc=eds.getCameraCount();
	
	//string m = eds.errors[EDS_ERR_OK];	
	//qDebug("The error: %s", m.c_str());

	qDebug("Canons: %d", cc);
	eds.sampleRun();

	//testsEDSDK();	

	//w.show();
	return 0;
	//return a.exec();
}
