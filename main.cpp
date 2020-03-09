#include "BaiduMapApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BaiduMapApp w;
	w.show();
	return a.exec();
}
