#include "ncatwindow.h"
#include "ui_ncatwindow.h"
#include "stdlib.h"
using namespace std;

NcatWindow::NcatWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NcatWindow)
{
    ui->setupUi(this);
}

NcatWindow::~NcatWindow()
{
    delete ui;
}

void NcatWindow::on_pushButton_clicked()
{
    QString ip=this->ui->tb_ip->displayText();
    QString port=this->ui->tb_port->displayText();
    QString msg=this->ui->tb_msg->displayText();

    QString cmd="echo 'Sending [" + msg + "] to " + ip + ":" + port +"';";
    cmd+="echo '" + msg + "' | ncat " + ip + " " + port;

    system(cmd.toLocal8Bit().constData());
}

