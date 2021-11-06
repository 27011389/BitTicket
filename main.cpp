#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include "logindialog.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;

    //QFile file("D:/Users/270113892/Desktop/BitTicketMain - Alex/BitTicketMain (2)/BitTicketMain/Obit.qss");
    //file.open(QFile::ReadOnly);
    //QString styleSheet { QLatin1String(file.readAll()) };
    //a.setStyleSheet(styleSheet);
   // m.show();

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
        m.show();
        a.exec();
    }

    return 0;
}
