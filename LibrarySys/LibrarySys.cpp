#include "LibrarySys.h"

#include "inn.h"
LibrarySys::LibrarySys(QWidget *parent)
    : QMainWindow(parent)
{	
    ui.setupUi(this);

}
//! testMYSQLs
void LibrarySys::mousePressSQLEvent()
{	
	
	this->setCentralWidget(new(Inner));
	//释放数据库连接
}
