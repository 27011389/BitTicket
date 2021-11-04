#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    QString username = ui->lineEdit_Username->text();
    QString password = ui->lineEdit_Password->text();

        if (username == "admin" && password == "1234")
        {
            this->hide();
            this->setResult(QDialog::Accepted);
        }
        else
        {
            QMessageBox::warning(this, "Login", "Incorrect Username and Password - Try Again");
            this->setResult(QDialog::Rejected);
        }
}

