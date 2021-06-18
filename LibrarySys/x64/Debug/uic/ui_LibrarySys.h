/********************************************************************************
** Form generated from reading UI file 'LibrarySys.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYSYS_H
#define UI_LIBRARYSYS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibrarySysClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LibrarySysClass)
    {
        if (LibrarySysClass->objectName().isEmpty())
            LibrarySysClass->setObjectName(QString::fromUtf8("LibrarySysClass"));
        LibrarySysClass->resize(969, 710);
        centralWidget = new QWidget(LibrarySysClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 310, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 130, 201, 81));
        label_3->setTextFormat(Qt::PlainText);
        label_3->setScaledContents(false);
        LibrarySysClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LibrarySysClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 969, 23));
        LibrarySysClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LibrarySysClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LibrarySysClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LibrarySysClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LibrarySysClass->setStatusBar(statusBar);

        retranslateUi(LibrarySysClass);
        QObject::connect(pushButton, SIGNAL(clicked()), LibrarySysClass, SLOT(mousePressSQLEvent()));

        QMetaObject::connectSlotsByName(LibrarySysClass);
    } // setupUi

    void retranslateUi(QMainWindow *LibrarySysClass)
    {
        LibrarySysClass->setWindowTitle(QApplication::translate("LibrarySysClass", "LibrarySys", nullptr));
        pushButton->setText(QApplication::translate("LibrarySysClass", "\347\202\271\345\207\273\350\277\233\345\205\245", nullptr));
        label_3->setText(QApplication::translate("LibrarySysClass", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibrarySysClass: public Ui_LibrarySysClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYSYS_H
