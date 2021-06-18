#include"inn.h"

Inner::Inner(QMainWindow *parent)
	: QWidget(parent)
	
{
	db = QSqlDatabase::addDatabase("QSQLITE");
	fid = 0;

	db.setDatabaseName("./student");
	bool bisOpenn = db.open();         
	//db.close();


	if (bisOpenn == true)
	{
		qDebug("aaa");
		//parent->close();
		QSqlQuery query(db);
		query.exec("drop table book");
		query.exec("create table book(id nvarchar(20) PRIMARY KEY,name nvarchar(20),author nvarchar(20), total int,present int)");
		query.exec("create table card(id nvarchar(20) PRIMARY KEY,name nvarchar(20))");
		query.exec("create table record(id nvarchar(20) PRIMARY KEY,card_id nvarchar(20),book_id nvarchar(20))");
		query.exec("insert into book values('A01','How to cook nails','Toriel', 128,41)");
		query.exec("insert into book values('A02','Puns201x','sans',30,2)");
		query.exec("insert into card values('20210601','catfighter')");
		query.exec("insert into card values('0001','20210601','A01')");
	}
	else {
		parent->close();
		qDebug("bbb");
		close();
	}
	


	 model = new QStandardItemModel(this);

	ui.setupUi(this);
	ui.label_3->hide();
	ui.label_4->hide();
	ui.label_5->hide();
	ui.label_6->hide();
	ui.label_7->hide();
	ui.label_8->hide();
	ui.lineEdit_4->hide();
	ui.lineEdit_5->hide();
	ui.lineEdit_6->hide();
	ui.lineEdit_7->hide();
	ui.lineEdit_8->hide();
	ui.lineEdit_9->hide();
	ui.pushButton_2->hide();
	ui.pushButton_3->hide();
	ui.pushButton_4->hide();
	ui.pushButton_5->hide();


	model->setColumnCount(5);
	model->setHeaderData(0, Qt::Horizontal, "ID");
	model->setHeaderData(1, Qt::Horizontal, "Name");
	model->setHeaderData(2, Qt::Horizontal, "Author");
	model->setHeaderData(3, Qt::Horizontal, "Total");
	model->setHeaderData(4, Qt::Horizontal, "Present");


	model->setRowCount(100);
	model->setHeaderData(0, Qt::Vertical, "1");
	model->setHeaderData(1, Qt::Vertical, "2");
	model->setHeaderData(2, Qt::Vertical, "3");


	
	ui.tableView->setModel(model);

}
void Inner::mousePressSeatchEvent(){
	QString search = ui.lineEdit->displayText();
	QSqlQuery qsQuery = QSqlQuery(db);
	QString strSqlText(QString("SELECT * FROM book WHERE name LIKE '%")+search+QString("%'"));//查询语法
	qsQuery.prepare(strSqlText);
	qsQuery.exec();
	QString temp;
	int col=0;
	while (qsQuery.next()) //依次取出查询结果的每一条记录，直至结束
	{
		qDebug("ccc");
		for (int i = 0; i < 5; i++) {
			temp = qsQuery.value(i).toString();
			model->setItem(col, i, new QStandardItem(temp));
			
		}
		col++;
		
		
	}
	qDebug("sss");
	//model->setItem(0, 1, new QStandardItem("s"));
	
}
void Inner::mousePressLoginEvent(){
	if (ui.lineEdit_2->displayText() == QString("Cukong") && ui.lineEdit_3->displayText() == QString("5Zev5Zev5LiD5Zev5oiR6aW/5LqG")) {
		qDebug("Welcome back, Cukong the Creator");
	}
	if (ui.lineEdit_2->displayText() == QString("Mds") && ui.lineEdit_3->displayText() == QString("howdoyodo")) {
		ui.label_3->show();
		ui.label_4->show();
		ui.label_5->show();
		ui.label_6->show();
		ui.label_7->show();
		ui.label_8->show();
		ui.lineEdit_4->show();
		ui.lineEdit_5->show();
		ui.lineEdit_6->show();
		ui.lineEdit_7->show();
		ui.lineEdit_8->show();
		ui.lineEdit_9->show();
		ui.pushButton_2->show();
		ui.pushButton_3->show();
		ui.pushButton_4->show();
		ui.pushButton_5->show();
	}
}
void Inner::mousePressInBoundEvent(){
	QString str[4];
	str[0] = "'";
	str[0] += ui.lineEdit_6->displayText();
	str[0] += "',";
	str[1] = "'";
	str[1]+=ui.lineEdit_7->displayText();
	str[1] += "',";
	str[2] = "'";
	str[2] += ui.lineEdit_8->displayText();
	str[2] += "',";
	str[3] = ui.lineEdit_9->displayText();


	QSqlQuery qsQuery = QSqlQuery(db);
	QString strSqlText(QString("INSERT INTO book VALUES(")+str[0]+str[1]+str[2]+str[3]+QString(",")+str[3]+QString(")"));
	qsQuery.prepare(strSqlText);
	qsQuery.exec();
}
void Inner::mousePressLendEvent(){
	QString str[3];
	int temp;
	str[0] = "'";
	str[0] = ui.lineEdit_4->displayText();
	str[0] += "'";
	str[1] = "'";
	str[1] = ui.lineEdit_5->displayText();
	str[1] += "'";
	QSqlQuery qsQuery = QSqlQuery(db);
	QString strSqlText(QString("SELECT * FROM book WHERE id = "+str[1]));
	qsQuery.prepare(strSqlText);
	qsQuery.exec();
	while (qsQuery.next()) {
		temp=qsQuery.value(4).toInt();

	}
	temp -= 1;

	strSqlText=(QString("SELECT * FROM card WHERE id = " + str[0]));
	qsQuery.prepare(strSqlText);
	qsQuery.exec();
	bool yes = 0;
	while (qsQuery.next()) {
		yes = 1;

	}
	if (!yes)return;

	qsQuery.exec(QString("INSERT INTO record VALUES(") + str[0] + str[1] + str[2] + QString(")"));
	str[2] = QString::number(temp);
	strSqlText=(QString("UPDATE book SET present = "+str[2]+" WHERE id ="+str[1]));
	qsQuery.prepare(strSqlText);
	qsQuery.exec();
	qsQuery.exec(QString("INSERT INTO record VALUES(") + QString::number(fid) + str[1] + str[2] + QString(")"));
	
}
void Inner::mousePressReturnEvent(){
	
}
void Inner::mouseManageEvent(){

}