/********************************************************************************
** Form generated from reading UI file 'BaiduMapApp.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAIDUMAPAPP_H
#define UI_BAIDUMAPAPP_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BaiduMapAppClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWebEngineView *webEngineView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BaiduMapAppClass)
    {
        if (BaiduMapAppClass->objectName().isEmpty())
            BaiduMapAppClass->setObjectName(QStringLiteral("BaiduMapAppClass"));
        BaiduMapAppClass->resize(600, 400);
        centralWidget = new QWidget(BaiduMapAppClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        webEngineView = new QWebEngineView(widget);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webEngineView);


        horizontalLayout->addWidget(widget);

        BaiduMapAppClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BaiduMapAppClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        BaiduMapAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BaiduMapAppClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BaiduMapAppClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BaiduMapAppClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BaiduMapAppClass->setStatusBar(statusBar);

        retranslateUi(BaiduMapAppClass);

        QMetaObject::connectSlotsByName(BaiduMapAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *BaiduMapAppClass)
    {
        BaiduMapAppClass->setWindowTitle(QApplication::translate("BaiduMapAppClass", "BaiduMapApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BaiduMapAppClass: public Ui_BaiduMapAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAIDUMAPAPP_H
