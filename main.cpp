#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include "logindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    m.hide();

    QMessageBox msgBox;
    LoginDialog secdialog;
    secdialog.setModal(true);

    if (secdialog.exec() != QDialog::Accepted)
    {
        msgBox.setText("Wrong credentials. The program will stop.");
        msgBox.exec();
        a.quit();
    }
    else
    {
        msgBox.setText("Correct Credentials. You are welcome.");
        msgBox.exec();
        m.show();
        a.exec();      
    }

    return 0;
}
