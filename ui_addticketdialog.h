/********************************************************************************
** Form generated from reading UI file 'addticketdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTICKETDIALOG_H
#define UI_ADDTICKETDIALOG_H

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

class Ui_addticketdialog
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *lb_name_2;
    QLabel *lb_email_2;
    QLabel *lb_phone_2;
    QLabel *label_4;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *txtRating_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *lb_ticket_num_2;
    QLabel *lb_incident_cat_2;
    QLabel *lb_tags_2;
    QLabel *lb_impact_2;
    QLabel *lb_urgency_2;
    QLabel *lb_priority_2;
    QLabel *lb_timestamp_2;
    QLabel *lb_level_support_2;
    QLabel *label_2;
    QLabel *lb_symptoms_3;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_7;
    QLineEdit *lineEdittags;
    QComboBox *comboBox_9;
    QComboBox *comboBox_10;
    QComboBox *comboBox_11;
    QDateTimeEdit *dateTimeEdit_2;
    QComboBox *comboBox_12;
    QLineEdit *lineEditAgent;
    QLineEdit *txtSymptoms1;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_TS;
    QLineEdit *txtRating;
    QComboBox *comboBox_IS;
    QLabel *lb_incident_cat_3;
    QLabel *lb_Ticket_Status;
    QLabel *lb_Incident_Status;
    QPushButton *pushButton_2;
    QLabel *lblImage;

    void setupUi(QDialog *addticketdialog)
    {
        if (addticketdialog->objectName().isEmpty())
            addticketdialog->setObjectName(QString::fromUtf8("addticketdialog"));
        addticketdialog->resize(778, 607);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/res/images/BitTicketLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        addticketdialog->setWindowIcon(icon);
        groupBox_2 = new QGroupBox(addticketdialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 440, 401, 151));
        QFont font;
        font.setBold(true);
        groupBox_2->setFont(font);
        layoutWidget_5 = new QWidget(groupBox_2);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 30, 101, 111));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lb_name_2 = new QLabel(layoutWidget_5);
        lb_name_2->setObjectName(QString::fromUtf8("lb_name_2"));
        QFont font1;
        font1.setBold(false);
        lb_name_2->setFont(font1);

        verticalLayout_5->addWidget(lb_name_2);

        lb_email_2 = new QLabel(layoutWidget_5);
        lb_email_2->setObjectName(QString::fromUtf8("lb_email_2"));
        lb_email_2->setFont(font1);

        verticalLayout_5->addWidget(lb_email_2);

        lb_phone_2 = new QLabel(layoutWidget_5);
        lb_phone_2->setObjectName(QString::fromUtf8("lb_phone_2"));
        lb_phone_2->setFont(font1);

        verticalLayout_5->addWidget(lb_phone_2);

        label_4 = new QLabel(layoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout_5->addWidget(label_4);

        layoutWidget_6 = new QWidget(groupBox_2);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(130, 30, 241, 108));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_13 = new QLineEdit(layoutWidget_6);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setFont(font1);

        verticalLayout_6->addWidget(lineEdit_13);

        lineEdit_14 = new QLineEdit(layoutWidget_6);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setFont(font1);

        verticalLayout_6->addWidget(lineEdit_14);

        lineEdit_15 = new QLineEdit(layoutWidget_6);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setFont(font1);

        verticalLayout_6->addWidget(lineEdit_15);

        txtRating_2 = new QLineEdit(layoutWidget_6);
        txtRating_2->setObjectName(QString::fromUtf8("txtRating_2"));
        txtRating_2->setFont(font1);

        verticalLayout_6->addWidget(txtRating_2);

        groupBox = new QGroupBox(addticketdialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 401, 371));
        groupBox->setFont(font);
        layoutWidget_7 = new QWidget(groupBox);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 30, 105, 321));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lb_ticket_num_2 = new QLabel(layoutWidget_7);
        lb_ticket_num_2->setObjectName(QString::fromUtf8("lb_ticket_num_2"));
        lb_ticket_num_2->setFont(font1);

        verticalLayout_7->addWidget(lb_ticket_num_2);

        lb_incident_cat_2 = new QLabel(layoutWidget_7);
        lb_incident_cat_2->setObjectName(QString::fromUtf8("lb_incident_cat_2"));
        lb_incident_cat_2->setFont(font1);

        verticalLayout_7->addWidget(lb_incident_cat_2);

        lb_tags_2 = new QLabel(layoutWidget_7);
        lb_tags_2->setObjectName(QString::fromUtf8("lb_tags_2"));
        lb_tags_2->setFont(font1);

        verticalLayout_7->addWidget(lb_tags_2);

        lb_impact_2 = new QLabel(layoutWidget_7);
        lb_impact_2->setObjectName(QString::fromUtf8("lb_impact_2"));
        lb_impact_2->setFont(font1);

        verticalLayout_7->addWidget(lb_impact_2);

        lb_urgency_2 = new QLabel(layoutWidget_7);
        lb_urgency_2->setObjectName(QString::fromUtf8("lb_urgency_2"));
        lb_urgency_2->setFont(font1);

        verticalLayout_7->addWidget(lb_urgency_2);

        lb_priority_2 = new QLabel(layoutWidget_7);
        lb_priority_2->setObjectName(QString::fromUtf8("lb_priority_2"));
        lb_priority_2->setFont(font1);

        verticalLayout_7->addWidget(lb_priority_2);

        lb_timestamp_2 = new QLabel(layoutWidget_7);
        lb_timestamp_2->setObjectName(QString::fromUtf8("lb_timestamp_2"));
        lb_timestamp_2->setFont(font1);

        verticalLayout_7->addWidget(lb_timestamp_2);

        lb_level_support_2 = new QLabel(layoutWidget_7);
        lb_level_support_2->setObjectName(QString::fromUtf8("lb_level_support_2"));
        lb_level_support_2->setFont(font1);

        verticalLayout_7->addWidget(lb_level_support_2);

        label_2 = new QLabel(layoutWidget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_7->addWidget(label_2);

        lb_symptoms_3 = new QLabel(layoutWidget_7);
        lb_symptoms_3->setObjectName(QString::fromUtf8("lb_symptoms_3"));
        lb_symptoms_3->setFont(font1);

        verticalLayout_7->addWidget(lb_symptoms_3);

        layoutWidget_8 = new QWidget(groupBox);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(130, 30, 241, 321));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget_8);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font1);

        verticalLayout_8->addWidget(lineEdit_2);

        comboBox_7 = new QComboBox(layoutWidget_8);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setFont(font1);

        verticalLayout_8->addWidget(comboBox_7);

        lineEdittags = new QLineEdit(layoutWidget_8);
        lineEdittags->setObjectName(QString::fromUtf8("lineEdittags"));
        lineEdittags->setFont(font1);

        verticalLayout_8->addWidget(lineEdittags);

        comboBox_9 = new QComboBox(layoutWidget_8);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        comboBox_9->setFont(font1);

        verticalLayout_8->addWidget(comboBox_9);

        comboBox_10 = new QComboBox(layoutWidget_8);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));
        comboBox_10->setFont(font1);

        verticalLayout_8->addWidget(comboBox_10);

        comboBox_11 = new QComboBox(layoutWidget_8);
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));
        comboBox_11->setFont(font1);

        verticalLayout_8->addWidget(comboBox_11);

        dateTimeEdit_2 = new QDateTimeEdit(layoutWidget_8);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setFont(font1);
        dateTimeEdit_2->setWrapping(true);
        dateTimeEdit_2->setFrame(false);
        dateTimeEdit_2->setCalendarPopup(true);

        verticalLayout_8->addWidget(dateTimeEdit_2);

        comboBox_12 = new QComboBox(layoutWidget_8);
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));
        comboBox_12->setFont(font1);

        verticalLayout_8->addWidget(comboBox_12);

        lineEditAgent = new QLineEdit(layoutWidget_8);
        lineEditAgent->setObjectName(QString::fromUtf8("lineEditAgent"));
        lineEditAgent->setFont(font1);

        verticalLayout_8->addWidget(lineEditAgent);

        txtSymptoms1 = new QLineEdit(layoutWidget_8);
        txtSymptoms1->setObjectName(QString::fromUtf8("txtSymptoms1"));
        txtSymptoms1->setFont(font1);

        verticalLayout_8->addWidget(txtSymptoms1);

        label = new QLabel(addticketdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 221, 21));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setUnderline(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(2, 173, 237);"));
        pushButton = new QPushButton(addticketdialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 400, 311, 31));
        pushButton->setFont(font);
        label_3 = new QLabel(addticketdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-90, -50, 281, 211));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/new/res/images/BitTicketLogoback.png);"));
        groupBox_3 = new QGroupBox(addticketdialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(440, 60, 311, 131));
        groupBox_3->setFont(font);
        comboBox_TS = new QComboBox(groupBox_3);
        comboBox_TS->setObjectName(QString::fromUtf8("comboBox_TS"));
        comboBox_TS->setGeometry(QRect(100, 60, 201, 22));
        comboBox_TS->setFont(font1);
        txtRating = new QLineEdit(groupBox_3);
        txtRating->setObjectName(QString::fromUtf8("txtRating"));
        txtRating->setGeometry(QRect(100, 30, 113, 20));
        comboBox_IS = new QComboBox(groupBox_3);
        comboBox_IS->setObjectName(QString::fromUtf8("comboBox_IS"));
        comboBox_IS->setGeometry(QRect(100, 90, 201, 22));
        comboBox_IS->setFont(font1);
        lb_incident_cat_3 = new QLabel(groupBox_3);
        lb_incident_cat_3->setObjectName(QString::fromUtf8("lb_incident_cat_3"));
        lb_incident_cat_3->setGeometry(QRect(10, 30, 51, 27));
        lb_Ticket_Status = new QLabel(groupBox_3);
        lb_Ticket_Status->setObjectName(QString::fromUtf8("lb_Ticket_Status"));
        lb_Ticket_Status->setGeometry(QRect(10, 60, 71, 27));
        lb_Incident_Status = new QLabel(groupBox_3);
        lb_Incident_Status->setObjectName(QString::fromUtf8("lb_Incident_Status"));
        lb_Incident_Status->setGeometry(QRect(10, 90, 81, 27));
        pushButton_2 = new QPushButton(addticketdialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 210, 75, 31));
        pushButton_2->setFont(font);
        lblImage = new QLabel(addticketdialog);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(550, 210, 201, 161));
        lblImage->setFrameShape(QFrame::Panel);
        label_3->raise();
        groupBox_2->raise();
        groupBox->raise();
        label->raise();
        pushButton->raise();
        groupBox_3->raise();
        pushButton_2->raise();
        lblImage->raise();

        retranslateUi(addticketdialog);

        QMetaObject::connectSlotsByName(addticketdialog);
    } // setupUi

    void retranslateUi(QDialog *addticketdialog)
    {
        addticketdialog->setWindowTitle(QCoreApplication::translate("addticketdialog", "Ticket Submission", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("addticketdialog", "CONTACT DETAILS", nullptr));
        lb_name_2->setText(QCoreApplication::translate("addticketdialog", "Name", nullptr));
        lb_email_2->setText(QCoreApplication::translate("addticketdialog", "Email", nullptr));
        lb_phone_2->setText(QCoreApplication::translate("addticketdialog", "Phone", nullptr));
        label_4->setText(QCoreApplication::translate("addticketdialog", "Channel Used", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addticketdialog", "TICKET DETAILS", nullptr));
        lb_ticket_num_2->setText(QCoreApplication::translate("addticketdialog", "Ticket Number", nullptr));
        lb_incident_cat_2->setText(QCoreApplication::translate("addticketdialog", "Incident Category", nullptr));
        lb_tags_2->setText(QCoreApplication::translate("addticketdialog", "Tags", nullptr));
        lb_impact_2->setText(QCoreApplication::translate("addticketdialog", "Impact", nullptr));
        lb_urgency_2->setText(QCoreApplication::translate("addticketdialog", "Urgency", nullptr));
        lb_priority_2->setText(QCoreApplication::translate("addticketdialog", "Prioity", nullptr));
        lb_timestamp_2->setText(QCoreApplication::translate("addticketdialog", "Timestamp", nullptr));
        lb_level_support_2->setText(QCoreApplication::translate("addticketdialog", "Level of Support", nullptr));
        label_2->setText(QCoreApplication::translate("addticketdialog", "Agent", nullptr));
        lb_symptoms_3->setText(QCoreApplication::translate("addticketdialog", "Symptoms", nullptr));
        label->setText(QCoreApplication::translate("addticketdialog", "TICKET SUBMISSION", nullptr));
        pushButton->setText(QCoreApplication::translate("addticketdialog", "Add", nullptr));
        label_3->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("addticketdialog", "TICKET STATUS", nullptr));
        lb_incident_cat_3->setText(QCoreApplication::translate("addticketdialog", "Rating", nullptr));
        lb_Ticket_Status->setText(QCoreApplication::translate("addticketdialog", "Ticket Status", nullptr));
        lb_Incident_Status->setText(QCoreApplication::translate("addticketdialog", "Incident Status", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addticketdialog", "Load", nullptr));
        lblImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addticketdialog: public Ui_addticketdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTICKETDIALOG_H
