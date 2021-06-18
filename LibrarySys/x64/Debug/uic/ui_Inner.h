/********************************************************************************
** Form generated from reading UI file 'Inner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INNER_H
#define UI_INNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(911, 672);
        tableView = new QTableView(Form);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(210, 60, 671, 571));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 30, 113, 20));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 30, 75, 23));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 590, 75, 23));
        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 320, 75, 23));
        pushButton_4 = new QPushButton(Form);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 250, 75, 23));
        pushButton_5 = new QPushButton(Form);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 290, 75, 23));
        pushButton_6 = new QPushButton(Form);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 130, 75, 23));
        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 60, 113, 20));
        lineEdit_3 = new QLineEdit(Form);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 90, 113, 20));
        lineEdit_4 = new QLineEdit(Form);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 180, 113, 20));
        lineEdit_5 = new QLineEdit(Form);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(60, 210, 113, 20));
        lineEdit_6 = new QLineEdit(Form);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(60, 420, 113, 20));
        lineEdit_7 = new QLineEdit(Form);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(60, 450, 113, 20));
        lineEdit_8 = new QLineEdit(Form);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(60, 480, 113, 20));
        lineEdit_9 = new QLineEdit(Form);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(60, 510, 113, 20));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 60, 54, 12));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 54, 12));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 180, 54, 12));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 210, 54, 12));
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 420, 54, 12));
        label_6 = new QLabel(Form);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 450, 54, 12));
        label_7 = new QLabel(Form);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 480, 54, 12));
        label_8 = new QLabel(Form);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 510, 54, 12));

        retranslateUi(Form);
        QObject::connect(pushButton, SIGNAL(clicked()), Form, SLOT(mousePressSeatchEvent()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form, SLOT(mousePressInBoundEvent()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Form, SLOT(mousePressLoginEvent()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QApplication::translate("Form", "Search", nullptr));
        pushButton_2->setText(QApplication::translate("Form", "Inbound", nullptr));
        pushButton_3->setText(QApplication::translate("Form", "Lend", nullptr));
        pushButton_4->setText(QApplication::translate("Form", "Return", nullptr));
        pushButton_5->setText(QApplication::translate("Form", "Manage", nullptr));
        pushButton_6->setText(QApplication::translate("Form", "Login", nullptr));
        label->setText(QApplication::translate("Form", "Username", nullptr));
        label_2->setText(QApplication::translate("Form", "Password", nullptr));
        label_3->setText(QApplication::translate("Form", "CardID", nullptr));
        label_4->setText(QApplication::translate("Form", "BookID", nullptr));
        label_5->setText(QApplication::translate("Form", "BookID", nullptr));
        label_6->setText(QApplication::translate("Form", "BookName", nullptr));
        label_7->setText(QApplication::translate("Form", "Author", nullptr));
        label_8->setText(QApplication::translate("Form", "Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INNER_H
