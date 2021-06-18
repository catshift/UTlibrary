#pragma once
#include"ui_Inner.h"
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QStandardItemModel>
class Inner : public QWidget
{
	Q_OBJECT

public:
	QSqlDatabase db;
	int id;
	QStandardItemModel* model;
	Inner(QMainWindow *parent = Q_NULLPTR);
private:
	Ui::Form ui;
public slots:
	void mousePressSeatchEvent();
	void mousePressLoginEvent();
	void mousePressInBoundEvent();
	void mousePressLendEvent();
	void mousePressReturnEvent();
	void mouseManageEvent();
};