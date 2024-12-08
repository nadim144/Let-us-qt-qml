#pragma once

#include <QObject>

class NadimQtClass  : public QObject
{
	Q_OBJECT

public:
	NadimQtClass(QWidget *parent);
	~NadimQtClass();
};
