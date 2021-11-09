#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QGraphicsOpacityEffect>

LoginDialog::LoginDialog(QWidget *parent) : QDialog(parent), ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    animation = new QPropertyAnimation(ui->label_4, "geometry");
    animation->setDuration(1200);
    animation->setStartValue(ui->label_4->geometry());
    animation->setEndValue(ui->label_5->geometry());
    animation->start();
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

        else if (username == "dev" && password == "1234")
        {
            this->hide();
            this->setResult(QDialog::Accepted);
        }

        else if (username == "Admin" && password == "1234")
        {
            this->hide();
            this->setResult(QDialog::Accepted);
        }

        else if (username == "ADMIN" && password == "1234")
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

