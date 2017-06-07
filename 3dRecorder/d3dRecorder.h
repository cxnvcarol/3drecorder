#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_d3dRecorder.h"

class d3dRecorder : public QMainWindow
{
	Q_OBJECT

public:
	d3dRecorder(QWidget *parent = Q_NULLPTR);

private:
	Ui::d3dRecorderClass ui;
};
