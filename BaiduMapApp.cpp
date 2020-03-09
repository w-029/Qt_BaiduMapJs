#include "BaiduMapApp.h"
#include <QtWidgets/QApplication>
#include <QDebug>
#include <QUrl>

BaiduMapApp::BaiduMapApp(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	loadMap();
}

void BaiduMapApp::loadMap() {
	QString appDir = QApplication::applicationDirPath();
	QUrl localFileUrl(appDir + QString("/baidumap.html"));
	qDebug() << localFileUrl.toString();
	ui.webEngineView->load(localFileUrl);
	connect(ui.webEngineView, SIGNAL(loadFinished(bool)), this, SLOT(onLoadFinished(bool)));
}

void BaiduMapApp::onLoadFinished(bool loaded) {
	qDebug() << "------------ map has loaded ------------";
	//QString command = QString("addPoint('%1','%2','%3')")
	//	.arg(104.067).arg(30.6667).arg(QString("point1"));
	//ui.webEngineView->page()->runJavaScript(command);
}
