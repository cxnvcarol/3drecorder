
#include "d3dRecorder.h"
#include <QtWidgets/QApplication>
#include "WorkingSession.h"
#include "EDSWrapper.h"
#include "../External/EDSDK/EDSDK.h"

#include <iostream>
#include <QDesktopWidget>

#include "StandardProjector.h"
using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StandardProjector iv;
	
	d3dRecorder w;
	iv.showInFullProjection();
	w.show();
	return a.exec();
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


	w.show();
	//return 0;
	return a.exec();
}
