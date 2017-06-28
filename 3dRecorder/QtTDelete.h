#pragma once

#include <QWidget>
#include "ui_QtTDelete.h"

class QtTDelete : public QWidget
{
	Q_OBJECT

public:
	QtTDelete(QWidget *parent = Q_NULLPTR);
	~QtTDelete();

private:
	Ui::QtTDelete ui;
};
