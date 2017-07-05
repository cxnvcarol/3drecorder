
#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"
#include "EDSWrapper.h"
#include "CanonCamera.h"
#include "../External/EDSDK/EDSDK.h"

#include <iostream>
#include <QDesktopWidget>

#include "StandardProjector.h"
using namespace std;

int testShowFullScreen(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StandardProjector iv;
	
	d3dRecorder w;
	iv.showInFullProjection();
	w.show();
	return a.exec();
}
void testIdentifyCameras()
{
	//TODO
	//Goal:: identify all connected cameras and fill array of cameras
	ActiveCamera *cameraList;
	cameraList = new ActiveCamera[5];//TODO Get the number first, then fill the array.
}

int main2(int argc, char *argv[])
{	

	QApplication a(argc, argv);
	d3dRecorder w;

	//open second window and display in fullscreen÷

	WorkingSession ws;
	EDSWrapper eds;
	
	
	int cc=eds.getCameraCount();
	
	qDebug("Canons: %d", cc);
	eds.sampleRun();

	CanonCamera cac;
	cac.takePicture();
	w.show();
	//return 0;
	return a.exec();
}


int main(int argc, char *argv[])
{
	/* Workflow:
	1. Initialize APIs
	2. Recognize and list devices (cameras and projectors)
	3. Open GUI elements and load identified list.
	4. Set listeners:
		a. when new camera appears
		b. when new projector appears
		c. when buttons: load projections-sequence, load caera-settings for selected camera(s?), change mode
	...The modes.. camera-live-play mode (x testing), only projection mode(x testing), sync-mode (actual active acquisition)



	*/
}