/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(573, 223);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/res/images/BitTicketLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDialog->setWindowIcon(icon);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 20, 331, 171));
        QFont font;
        font.setBold(true);
        groupBox->setFont(font);
        lineEdit_Username = new QLineEdit(groupBox);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(120, 40, 180, 20));
        QFont font1;
        font1.setBold(false);
        lineEdit_Username->setFont(font1);
        lineEdit_Username->setAutoFillBackground(false);
        lineEdit_Username->setInputMethodHints(Qt::ImhNone);
        lineEdit_Username->setText(QString::fromUtf8(""));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(120, 80, 180, 20));
        lineEdit_Password->setFont(font1);
        lineEdit_Password->setText(QString::fromUtf8(""));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 71, 16));
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(18, 80, 81, 16));
        label_2->setFont(font1);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 120, 81, 23));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 250, 161, 201));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/new/res/images/BitTicketLogo.png);"));
        label_5 = new QLabel(LoginDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 161, 201));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LoginDialog", "Login", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_Username->setToolTip(QCoreApplication::translate("LoginDialog", "<html><head/><body><p>admin is the password</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineEdit_Username->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        lineEdit_Username->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        lineEdit_Username->setInputMask(QString());
        lineEdit_Username->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Username", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_Password->setToolTip(QCoreApplication::translate("LoginDialog", "<html><head/><body><p>1234 is the password</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
