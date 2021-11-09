#include "mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include "logindialog.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;

    QFile file(":/new/res/images/Darkmode.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet { QLatin1String(file.readAll()) };
    a.setStyleSheet(styleSheet);

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
