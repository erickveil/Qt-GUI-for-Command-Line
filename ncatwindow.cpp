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
    /*
    string ip=tb_ip.text;
    string port=tb_port.text;
    string msg=tb_msg.text;

    string cmd="echo '"+msg+"' | ncat "+ip+" "+port;
    const char* cmd_ptr = cmd.c_str();
    system(cmd_ptr);
    */
    system("echo 'This is a test' | ncat 192.168.60.78 50503");
}
