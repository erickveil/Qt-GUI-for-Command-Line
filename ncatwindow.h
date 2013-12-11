#ifndef NCATWINDOW_H
#define NCATWINDOW_H

#include <QMainWindow>

namespace Ui {
class NcatWindow;
}

class NcatWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NcatWindow(QWidget *parent = 0);
    ~NcatWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NcatWindow *ui;
};

#endif // NCATWINDOW_H
