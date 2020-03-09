#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BaiduMapApp.h"

class BaiduMapApp : public QMainWindow
{
	Q_OBJECT

public:
	BaiduMapApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::BaiduMapAppClass ui;

private slots:
	void onLoadFinished(bool loaded);

private:
	void loadMap();
};
