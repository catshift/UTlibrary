#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include "ui_LibrarySys.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
class LibrarySys : public QMainWindow
{
    Q_OBJECT

public:
    LibrarySys(QWidget *parent = Q_NULLPTR);
	QPushButton* button[7];
private:
	QSqlTableModel *BookModel;     
	QSqlTableModel *LisenseModel;      

	
    Ui::LibrarySysClass ui;
public slots:
	void mousePressSQLEvent();
};
