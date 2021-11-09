/********************************************************************************
** Form generated from reading UI file 'editticketdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTICKETDIALOG_H
#define UI_EDITTICKETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editticketdialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *lb_incident_cat;
    QLabel *lb_tags;
    QLabel *lb_impact;
    QLabel *lb_urgency;
    QLabel *lb_priority;
    QLabel *lb_timestamp;
    QLabel *lb_level_support;
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_5;
    QLineEdit *lineEdit_Tag;
    QComboBox *comboBox_6;
    QComboBox *comboBox_3;
    QComboBox *comboBox_2;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBox;
    QLineEdit *lineEditAgent;
    QLabel *lb_ticket_num;
    QLabel *lb_symptoms_3;
    QLineEdit *lineEdit_4;
    QLabel *lb_symptoms_4;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_name;
    QLabel *lb_email;
    QLabel *lb_phone;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QPushButton *pushButton;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QLineEdit *txtRating;
    QLabel *label_2;
    QComboBox *comboBox_TS1;
    QLabel *lb_Incident_Status;
    QComboBox *comboBox_IS1;
    QLabel *lb_Ticket_Status;
    QLabel *lblImage;
    QPushButton *pushButton_2;

    void setupUi(QDialog *editticketdialog)
    {
        if (editticketdialog->objectName().isEmpty())
            editticketdialog->setObjectName(QString::fromUtf8("editticketdialog"));
        editticketdialog->resize(791, 568);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/res/images/BitTicketLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        editticketdialog->setWindowIcon(icon);
        label = new QLabel(editticketdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 291, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(2, 173, 237);"));
        groupBox = new QGroupBox(editticketdialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 401, 351));
        QFont font1;
        font1.setBold(true);
        groupBox->setFont(font1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 105, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lb_incident_cat = new QLabel(layoutWidget);
        lb_incident_cat->setObjectName(QString::fromUtf8("lb_incident_cat"));
        QFont font2;
        font2.setBold(false);
        lb_incident_cat->setFont(font2);

        verticalLayout_3->addWidget(lb_incident_cat);

        lb_tags = new QLabel(layoutWidget);
        lb_tags->setObjectName(QString::fromUtf8("lb_tags"));
        lb_tags->setFont(font2);

        verticalLayout_3->addWidget(lb_tags);

        lb_impact = new QLabel(layoutWidget);
        lb_impact->setObjectName(QString::fromUtf8("lb_impact"));
        lb_impact->setFont(font2);

        verticalLayout_3->addWidget(lb_impact);

        lb_urgency = new QLabel(layoutWidget);
        lb_urgency->setObjectName(QString::fromUtf8("lb_urgency"));
        lb_urgency->setFont(font2);

        verticalLayout_3->addWidget(lb_urgency);

        lb_priority = new QLabel(layoutWidget);
        lb_priority->setObjectName(QString::fromUtf8("lb_priority"));
        lb_priority->setFont(font2);

        verticalLayout_3->addWidget(lb_priority);

        lb_timestamp = new QLabel(layoutWidget);
        lb_timestamp->setObjectName(QString::fromUtf8("lb_timestamp"));
        lb_timestamp->setFont(font2);

        verticalLayout_3->addWidget(lb_timestamp);

        lb_level_support = new QLabel(layoutWidget);
        lb_level_support->setObjectName(QString::fromUtf8("lb_level_support"));
        lb_level_support->setFont(font2);

        verticalLayout_3->addWidget(lb_level_support);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        verticalLayout_3->addWidget(label_4);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 50, 241, 261));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox_5 = new QComboBox(layoutWidget_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setFont(font2);

        verticalLayout->addWidget(comboBox_5);

        lineEdit_Tag = new QLineEdit(layoutWidget_2);
        lineEdit_Tag->setObjectName(QString::fromUtf8("lineEdit_Tag"));
        lineEdit_Tag->setFont(font2);

        verticalLayout->addWidget(lineEdit_Tag);

        comboBox_6 = new QComboBox(layoutWidget_2);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setFont(font2);

        verticalLayout->addWidget(comboBox_6);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font2);

        verticalLayout->addWidget(comboBox_3);

        comboBox_2 = new QComboBox(layoutWidget_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFont(font2);

        verticalLayout->addWidget(comboBox_2);

        dateTimeEdit = new QDateTimeEdit(layoutWidget_2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setFont(font2);
        dateTimeEdit->setCalendarPopup(true);

        verticalLayout->addWidget(dateTimeEdit);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font2);

        verticalLayout->addWidget(comboBox);

        lineEditAgent = new QLineEdit(layoutWidget_2);
        lineEditAgent->setObjectName(QString::fromUtf8("lineEditAgent"));
        lineEditAgent->setFont(font2);

        verticalLayout->addWidget(lineEditAgent);

        lb_ticket_num = new QLabel(groupBox);
        lb_ticket_num->setObjectName(QString::fromUtf8("lb_ticket_num"));
        lb_ticket_num->setGeometry(QRect(140, 20, 241, 27));
        lb_ticket_num->setCursor(QCursor(Qt::ForbiddenCursor));
        lb_ticket_num->setFrameShape(QFrame::Panel);
        lb_ticket_num->setFrameShadow(QFrame::Raised);
        lb_symptoms_3 = new QLabel(groupBox);
        lb_symptoms_3->setObjectName(QString::fromUtf8("lb_symptoms_3"));
        lb_symptoms_3->setGeometry(QRect(20, 320, 103, 23));
        lb_symptoms_3->setFont(font2);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 320, 241, 21));
        lineEdit_4->setFont(font2);
        lb_symptoms_4 = new QLabel(groupBox);
        lb_symptoms_4->setObjectName(QString::fromUtf8("lb_symptoms_4"));
        lb_symptoms_4->setGeometry(QRect(20, 20, 103, 23));
        lb_symptoms_4->setFont(font2);
        groupBox_2 = new QGroupBox(editticketdialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 420, 401, 121));
        groupBox_2->setFont(font1);
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 30, 101, 81));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_name = new QLabel(layoutWidget_4);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setFont(font2);

        verticalLayout_4->addWidget(lb_name);

        lb_email = new QLabel(layoutWidget_4);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setFont(font2);

        verticalLayout_4->addWidget(lb_email);

        lb_phone = new QLabel(layoutWidget_4);
        lb_phone->setObjectName(QString::fromUtf8("lb_phone"));
        lb_phone->setFont(font2);

        verticalLayout_4->addWidget(lb_phone);

        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(140, 30, 241, 80));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_10 = new QLineEdit(layoutWidget_3);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setFont(font2);

        verticalLayout_2->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(layoutWidget_3);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setFont(font2);

        verticalLayout_2->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(layoutWidget_3);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setFont(font2);

        verticalLayout_2->addWidget(lineEdit_12);

        pushButton = new QPushButton(editticketdialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 380, 301, 31));
        pushButton->setFont(font1);
        label_3 = new QLabel(editticketdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(570, 380, 281, 211));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/res/images/BitTicketLogoback.png);"));
        groupBox_3 = new QGroupBox(editticketdialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(450, 60, 301, 121));
        groupBox_3->setFont(font1);
        txtRating = new QLineEdit(groupBox_3);
        txtRating->setObjectName(QString::fromUtf8("txtRating"));
        txtRating->setGeometry(QRect(110, 30, 71, 20));
        txtRating->setFont(font2);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 61, 21));
        comboBox_TS1 = new QComboBox(groupBox_3);
        comboBox_TS1->setObjectName(QString::fromUtf8("comboBox_TS1"));
        comboBox_TS1->setGeometry(QRect(110, 60, 181, 22));
        comboBox_TS1->setFont(font2);
        lb_Incident_Status = new QLabel(groupBox_3);
        lb_Incident_Status->setObjectName(QString::fromUtf8("lb_Incident_Status"));
        lb_Incident_Status->setGeometry(QRect(10, 90, 91, 27));
        comboBox_IS1 = new QComboBox(groupBox_3);
        comboBox_IS1->setObjectName(QString::fromUtf8("comboBox_IS1"));
        comboBox_IS1->setGeometry(QRect(110, 90, 181, 22));
        comboBox_IS1->setFont(font2);
        lb_Ticket_Status = new QLabel(groupBox_3);
        lb_Ticket_Status->setObjectName(QString::fromUtf8("lb_Ticket_Status"));
        lb_Ticket_Status->setGeometry(QRect(10, 60, 81, 27));
        lblImage = new QLabel(editticketdialog);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(560, 200, 201, 161));
        lblImage->setFrameShape(QFrame::Panel);
        pushButton_2 = new QPushButton(editticketdialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 200, 75, 31));
        pushButton_2->setFont(font1);
        label_3->raise();
        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        pushButton->raise();
        groupBox_3->raise();
        lblImage->raise();
        pushButton_2->raise();

        retranslateUi(editticketdialog);

        QMetaObject::connectSlotsByName(editticketdialog);
    } // setupUi

    void retranslateUi(QDialog *editticketdialog)
    {
        editticketdialog->setWindowTitle(QCoreApplication::translate("editticketdialog", "Edit Ticket", nullptr));
        label->setText(QCoreApplication::translate("editticketdialog", "EDIT TICKET SUBMISSION", nullptr));
        groupBox->setTitle(QCoreApplication::translate("editticketdialog", "TICKET DETAILS", nullptr));
        lb_incident_cat->setText(QCoreApplication::translate("editticketdialog", "Incident Category", nullptr));
        lb_tags->setText(QCoreApplication::translate("editticketdialog", "Tags", nullptr));
        lb_impact->setText(QCoreApplication::translate("editticketdialog", "Impact", nullptr));
        lb_urgency->setText(QCoreApplication::translate("editticketdialog", "Urgency", nullptr));
        lb_priority->setText(QCoreApplication::translate("editticketdialog", "Prioity", nullptr));
        lb_timestamp->setText(QCoreApplication::translate("editticketdialog", "Timestamp", nullptr));
        lb_level_support->setText(QCoreApplication::translate("editticketdialog", "Level of Support", nullptr));
        label_4->setText(QCoreApplication::translate("editticketdialog", "Agent", nullptr));
#if QT_CONFIG(tooltip)
        lb_ticket_num->setToolTip(QCoreApplication::translate("editticketdialog", "Can not modify", nullptr));
#endif // QT_CONFIG(tooltip)
        lb_ticket_num->setText(QString());
        lb_symptoms_3->setText(QCoreApplication::translate("editticketdialog", "Symptoms", nullptr));
        lineEdit_4->setText(QString());
        lb_symptoms_4->setText(QCoreApplication::translate("editticketdialog", "Ticket Number", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("editticketdialog", "CONTACT DETAILS", nullptr));
        lb_name->setText(QCoreApplication::translate("editticketdialog", "Name", nullptr));
        lb_email->setText(QCoreApplication::translate("editticketdialog", "Email", nullptr));
        lb_phone->setText(QCoreApplication::translate("editticketdialog", "Phone", nullptr));
        pushButton->setText(QCoreApplication::translate("editticketdialog", "Confirm", nullptr));
        label_3->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("editticketdialog", "STATUS", nullptr));
        label_2->setText(QCoreApplication::translate("editticketdialog", "Rating", nullptr));
        lb_Incident_Status->setText(QCoreApplication::translate("editticketdialog", "Incident Status", nullptr));
        lb_Ticket_Status->setText(QCoreApplication::translate("editticketdialog", "Ticket Status", nullptr));
        lblImage->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("editticketdialog", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editticketdialog: public Ui_editticketdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTICKETDIALOG_H
