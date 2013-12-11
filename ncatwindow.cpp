#include "ncatwindow.h"
#include "ui_ncatwindow.h"
#include <string>
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
    QString q_ip=this->ui->tb_ip->displayText();
    QString q_port=this->ui->tb_port->displayText();
    QString q_msg=this->ui->tb_msg->displayText();

    string str_msg=q_msg.toLocal8Bit().constData();
    string str_ip=q_ip.toLocal8Bit().constData();
    string str_port=q_port.toLocal8Bit().constData();

    // echo to stdout as well as ncat using the shell
    string cmd="echo 'Sending ["+str_msg+"] to "+str_ip+":"+str_port+"\n';";
    cmd+="echo '"+str_msg+"' | ncat "+str_ip+" "+str_port;

    const char* cmd_ptr = cmd.c_str();

    system(cmd_ptr);
}

