/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
//#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionModify_Ticket;
    QAction *actionSpyBot;
    QAction *actionGravira;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QLabel *lb_rating;
    QLabel *lb_display_rating;
    QLabel *lb_total_closed;
    QLabel *lb_total_solved;
    QLabel *lb_display_Incstatus;
    QLabel *lb_display_Tickstatus;
    QPushButton *pb_remove;
    QLabel *label;
    QListWidget *lst_tickets;
    QPushButton *pb_modify;
    QGroupBox *groupBox;
    QLabel *label_14;
    QLabel *lb_level_support;
    QLabel *lb_ticket_num;
    QLabel *lb_timestamp;
    QLabel *label_3;
    QLabel *lb_priority;
    QLabel *lb_impact;
    QLabel *lb_urgency;
    QLabel *lb_incident_cat;
    QLabel *lb_tags;
    QLabel *lb_display_ticketnum;
    QLabel *lb_display_symptoms;
    QLabel *lb_display_Agent;
    QLabel *lb_display_timestamp;
    QLabel *lb_display_levelsupport;
    QLabel *lb_display_Incidentcat;
    QLabel *lb_display_impact;
    QLabel *lb_display_priority;
    QLabel *lb_display_tags;
    QLabel *lb_display_urgency;
    QGroupBox *groupBox_2;
    QLabel *lb_display_phone;
    QLabel *lb_display_email;
    QLabel *lb_display_name;
    QLabel *lb_phone;
    QLabel *lb_email;
    QLabel *lb_name;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *lblImage;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuThemes;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1041, 648);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/res/images/BitTicketLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionModify_Ticket = new QAction(MainWindow);
        actionModify_Ticket->setObjectName(QString::fromUtf8("actionModify_Ticket"));
        actionSpyBot = new QAction(MainWindow);
        actionSpyBot->setObjectName(QString::fromUtf8("actionSpyBot"));
        actionGravira = new QAction(MainWindow);
        actionGravira->setObjectName(QString::fromUtf8("actionGravira"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(670, 120, 311, 131));
        QFont font;
        font.setBold(true);
        groupBox_3->setFont(font);
        lb_rating = new QLabel(groupBox_3);
        lb_rating->setObjectName(QString::fromUtf8("lb_rating"));
        lb_rating->setGeometry(QRect(10, 30, 111, 21));
        QFont font1;
        font1.setBold(false);
        lb_rating->setFont(font1);
        lb_display_rating = new QLabel(groupBox_3);
        lb_display_rating->setObjectName(QString::fromUtf8("lb_display_rating"));
        lb_display_rating->setGeometry(QRect(119, 30, 181, 23));
        lb_display_rating->setFont(font1);
        lb_display_rating->setFrameShape(QFrame::Panel);
        lb_display_rating->setFrameShadow(QFrame::Plain);
        lb_total_closed = new QLabel(groupBox_3);
        lb_total_closed->setObjectName(QString::fromUtf8("lb_total_closed"));
        lb_total_closed->setGeometry(QRect(10, 60, 111, 22));
        lb_total_closed->setFont(font1);
        lb_total_solved = new QLabel(groupBox_3);
        lb_total_solved->setObjectName(QString::fromUtf8("lb_total_solved"));
        lb_total_solved->setGeometry(QRect(10, 90, 111, 21));
        lb_total_solved->setFont(font1);
        lb_display_Incstatus = new QLabel(groupBox_3);
        lb_display_Incstatus->setObjectName(QString::fromUtf8("lb_display_Incstatus"));
        lb_display_Incstatus->setGeometry(QRect(119, 60, 181, 23));
        lb_display_Incstatus->setFont(font1);
        lb_display_Incstatus->setFrameShape(QFrame::Panel);
        lb_display_Incstatus->setFrameShadow(QFrame::Plain);
        lb_display_Tickstatus = new QLabel(groupBox_3);
        lb_display_Tickstatus->setObjectName(QString::fromUtf8("lb_display_Tickstatus"));
        lb_display_Tickstatus->setGeometry(QRect(119, 90, 181, 23));
        lb_display_Tickstatus->setFont(font1);
        lb_display_Tickstatus->setFrameShape(QFrame::Panel);
        lb_display_Tickstatus->setFrameShadow(QFrame::Plain);
        pb_remove = new QPushButton(centralwidget);
        pb_remove->setObjectName(QString::fromUtf8("pb_remove"));
        pb_remove->setGeometry(QRect(30, 560, 251, 31));
        pb_remove->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 40, 221, 30));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setStrikeOut(false);
        label->setFont(font2);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(2, 173, 237);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::PlainText);
        lst_tickets = new QListWidget(centralwidget);
        lst_tickets->setObjectName(QString::fromUtf8("lst_tickets"));
        lst_tickets->setGeometry(QRect(30, 200, 251, 341));
        lst_tickets->setFrameShape(QFrame::Box);
        lst_tickets->setFrameShadow(QFrame::Plain);
        lst_tickets->setLineWidth(1);
        pb_modify = new QPushButton(centralwidget);
        pb_modify->setObjectName(QString::fromUtf8("pb_modify"));
        pb_modify->setGeometry(QRect(670, 560, 311, 31));
        pb_modify->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(300, 120, 351, 331));
        groupBox->setFont(font);
        groupBox->setFlat(false);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 290, 129, 22));
        label_14->setFont(font1);
        lb_level_support = new QLabel(groupBox);
        lb_level_support->setObjectName(QString::fromUtf8("lb_level_support"));
        lb_level_support->setGeometry(QRect(10, 233, 129, 22));
        lb_level_support->setFont(font1);
        lb_ticket_num = new QLabel(groupBox);
        lb_ticket_num->setObjectName(QString::fromUtf8("lb_ticket_num"));
        lb_ticket_num->setGeometry(QRect(10, 33, 129, 23));
        lb_ticket_num->setFont(font1);
        lb_timestamp = new QLabel(groupBox);
        lb_timestamp->setObjectName(QString::fromUtf8("lb_timestamp"));
        lb_timestamp->setGeometry(QRect(10, 204, 129, 23));
        lb_timestamp->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 261, 129, 23));
        label_3->setFont(font1);
        lb_priority = new QLabel(groupBox);
        lb_priority->setObjectName(QString::fromUtf8("lb_priority"));
        lb_priority->setGeometry(QRect(10, 176, 129, 22));
        lb_priority->setFont(font1);
        lb_impact = new QLabel(groupBox);
        lb_impact->setObjectName(QString::fromUtf8("lb_impact"));
        lb_impact->setGeometry(QRect(10, 119, 129, 22));
        lb_impact->setFont(font1);
        lb_urgency = new QLabel(groupBox);
        lb_urgency->setObjectName(QString::fromUtf8("lb_urgency"));
        lb_urgency->setGeometry(QRect(10, 147, 129, 23));
        lb_urgency->setFont(font1);
        lb_incident_cat = new QLabel(groupBox);
        lb_incident_cat->setObjectName(QString::fromUtf8("lb_incident_cat"));
        lb_incident_cat->setGeometry(QRect(10, 62, 129, 22));
        lb_incident_cat->setFont(font1);
        lb_tags = new QLabel(groupBox);
        lb_tags->setObjectName(QString::fromUtf8("lb_tags"));
        lb_tags->setGeometry(QRect(10, 90, 129, 23));
        lb_tags->setFont(font1);
        lb_display_ticketnum = new QLabel(groupBox);
        lb_display_ticketnum->setObjectName(QString::fromUtf8("lb_display_ticketnum"));
        lb_display_ticketnum->setGeometry(QRect(140, 30, 179, 23));
        lb_display_ticketnum->setFont(font1);
        lb_display_ticketnum->setFrameShape(QFrame::Box);
        lb_display_ticketnum->setFrameShadow(QFrame::Plain);
        lb_display_ticketnum->setLineWidth(1);
        lb_display_ticketnum->setMidLineWidth(3);
        lb_display_symptoms = new QLabel(groupBox);
        lb_display_symptoms->setObjectName(QString::fromUtf8("lb_display_symptoms"));
        lb_display_symptoms->setGeometry(QRect(140, 291, 179, 23));
        lb_display_symptoms->setFont(font1);
        lb_display_symptoms->setFrameShape(QFrame::Box);
        lb_display_symptoms->setFrameShadow(QFrame::Plain);
        lb_display_symptoms->setLineWidth(1);
        lb_display_symptoms->setMidLineWidth(3);
        lb_display_Agent = new QLabel(groupBox);
        lb_display_Agent->setObjectName(QString::fromUtf8("lb_display_Agent"));
        lb_display_Agent->setGeometry(QRect(140, 262, 179, 23));
        lb_display_Agent->setFont(font1);
        lb_display_Agent->setFrameShape(QFrame::Box);
        lb_display_Agent->setFrameShadow(QFrame::Plain);
        lb_display_Agent->setLineWidth(1);
        lb_display_Agent->setMidLineWidth(3);
        lb_display_timestamp = new QLabel(groupBox);
        lb_display_timestamp->setObjectName(QString::fromUtf8("lb_display_timestamp"));
        lb_display_timestamp->setGeometry(QRect(140, 204, 179, 23));
        lb_display_timestamp->setFont(font1);
        lb_display_timestamp->setFrameShape(QFrame::Box);
        lb_display_timestamp->setFrameShadow(QFrame::Plain);
        lb_display_timestamp->setLineWidth(1);
        lb_display_timestamp->setMidLineWidth(3);
        lb_display_levelsupport = new QLabel(groupBox);
        lb_display_levelsupport->setObjectName(QString::fromUtf8("lb_display_levelsupport"));
        lb_display_levelsupport->setGeometry(QRect(140, 233, 179, 23));
        lb_display_levelsupport->setFont(font1);
        lb_display_levelsupport->setFrameShape(QFrame::Box);
        lb_display_levelsupport->setFrameShadow(QFrame::Plain);
        lb_display_levelsupport->setLineWidth(1);
        lb_display_levelsupport->setMidLineWidth(3);
        lb_display_Incidentcat = new QLabel(groupBox);
        lb_display_Incidentcat->setObjectName(QString::fromUtf8("lb_display_Incidentcat"));
        lb_display_Incidentcat->setGeometry(QRect(140, 59, 179, 23));
        lb_display_Incidentcat->setFont(font1);
        lb_display_Incidentcat->setFrameShape(QFrame::Box);
        lb_display_Incidentcat->setFrameShadow(QFrame::Plain);
        lb_display_Incidentcat->setLineWidth(1);
        lb_display_Incidentcat->setMidLineWidth(3);
        lb_display_impact = new QLabel(groupBox);
        lb_display_impact->setObjectName(QString::fromUtf8("lb_display_impact"));
        lb_display_impact->setGeometry(QRect(140, 117, 179, 23));
        lb_display_impact->setFont(font1);
        lb_display_impact->setFrameShape(QFrame::Box);
        lb_display_impact->setFrameShadow(QFrame::Plain);
        lb_display_impact->setLineWidth(1);
        lb_display_impact->setMidLineWidth(3);
        lb_display_priority = new QLabel(groupBox);
        lb_display_priority->setObjectName(QString::fromUtf8("lb_display_priority"));
        lb_display_priority->setGeometry(QRect(140, 175, 179, 23));
        lb_display_priority->setFont(font1);
        lb_display_priority->setFrameShape(QFrame::Box);
        lb_display_priority->setFrameShadow(QFrame::Plain);
        lb_display_priority->setLineWidth(1);
        lb_display_priority->setMidLineWidth(3);
        lb_display_tags = new QLabel(groupBox);
        lb_display_tags->setObjectName(QString::fromUtf8("lb_display_tags"));
        lb_display_tags->setGeometry(QRect(140, 88, 179, 23));
        lb_display_tags->setFont(font1);
        lb_display_tags->setFrameShape(QFrame::Box);
        lb_display_tags->setFrameShadow(QFrame::Plain);
        lb_display_tags->setLineWidth(1);
        lb_display_tags->setMidLineWidth(3);
        lb_display_urgency = new QLabel(groupBox);
        lb_display_urgency->setObjectName(QString::fromUtf8("lb_display_urgency"));
        lb_display_urgency->setGeometry(QRect(140, 146, 179, 23));
        lb_display_urgency->setFont(font1);
        lb_display_urgency->setFrameShape(QFrame::Box);
        lb_display_urgency->setFrameShadow(QFrame::Plain);
        lb_display_urgency->setLineWidth(1);
        lb_display_urgency->setMidLineWidth(3);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 460, 351, 131));
        groupBox_2->setFont(font);
        lb_display_phone = new QLabel(groupBox_2);
        lb_display_phone->setObjectName(QString::fromUtf8("lb_display_phone"));
        lb_display_phone->setGeometry(QRect(140, 90, 179, 23));
        lb_display_phone->setFont(font1);
        lb_display_phone->setFrameShape(QFrame::Box);
        lb_display_phone->setFrameShadow(QFrame::Plain);
        lb_display_phone->setLineWidth(1);
        lb_display_phone->setMidLineWidth(3);
        lb_display_email = new QLabel(groupBox_2);
        lb_display_email->setObjectName(QString::fromUtf8("lb_display_email"));
        lb_display_email->setGeometry(QRect(140, 61, 179, 23));
        lb_display_email->setFont(font1);
        lb_display_email->setFrameShape(QFrame::Box);
        lb_display_email->setFrameShadow(QFrame::Plain);
        lb_display_email->setLineWidth(1);
        lb_display_email->setMidLineWidth(3);
        lb_display_name = new QLabel(groupBox_2);
        lb_display_name->setObjectName(QString::fromUtf8("lb_display_name"));
        lb_display_name->setGeometry(QRect(140, 32, 179, 23));
        lb_display_name->setFont(font1);
        lb_display_name->setFrameShape(QFrame::Box);
        lb_display_name->setFrameShadow(QFrame::Plain);
        lb_display_name->setLineWidth(1);
        lb_display_name->setMidLineWidth(3);
        lb_phone = new QLabel(groupBox_2);
        lb_phone->setObjectName(QString::fromUtf8("lb_phone"));
        lb_phone->setGeometry(QRect(10, 90, 59, 22));
        lb_phone->setFont(font1);
        lb_email = new QLabel(groupBox_2);
        lb_email->setObjectName(QString::fromUtf8("lb_email"));
        lb_email->setGeometry(QRect(10, 61, 59, 23));
        lb_email->setFont(font1);
        lb_name = new QLabel(groupBox_2);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setGeometry(QRect(10, 33, 59, 22));
        lb_name->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 10, 231, 141));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/res/images/BitTicketLogo.png);"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 170, 151, 21));
        lineEdit->setFrame(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 170, 91, 21));
        pushButton->setFont(font);
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(669, 270, 311, 271));
        lblImage->setFrameShape(QFrame::Panel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1041, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuThemes = new QMenu(menuSettings);
        menuThemes->setObjectName(QString::fromUtf8("menuThemes"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lst_tickets, pb_remove);
        QWidget::setTabOrder(pb_remove, pb_modify);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionModify_Ticket);
        menuFile->addAction(actionExit);
        menuSettings->addAction(menuThemes->menuAction());
        menuThemes->addAction(actionSpyBot);
        menuThemes->addAction(actionGravira);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ticket Dashboard", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New Ticket", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load Tickets", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save Tickets", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionModify_Ticket->setText(QCoreApplication::translate("MainWindow", "Modify Ticket", nullptr));
        actionSpyBot->setText(QCoreApplication::translate("MainWindow", "Darkmode", nullptr));
        actionGravira->setText(QCoreApplication::translate("MainWindow", "Lightmode", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Review", nullptr));
        lb_rating->setText(QCoreApplication::translate("MainWindow", "Rating", nullptr));
        lb_display_rating->setText(QString());
        lb_total_closed->setText(QCoreApplication::translate("MainWindow", "Incident Status", nullptr));
        lb_total_solved->setText(QCoreApplication::translate("MainWindow", "Ticket Status ", nullptr));
        lb_display_Incstatus->setText(QString());
        lb_display_Tickstatus->setText(QString());
        pb_remove->setText(QCoreApplication::translate("MainWindow", "REMOVE TICKET", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TICKET DASHBOARD", nullptr));
#if QT_CONFIG(tooltip)
        lst_tickets->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>List of Tickets</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pb_modify->setText(QCoreApplication::translate("MainWindow", "MODIFY TICKET", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Ticket Details", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Symptoms", nullptr));
        lb_level_support->setText(QCoreApplication::translate("MainWindow", "Level of Support", nullptr));
        lb_ticket_num->setText(QCoreApplication::translate("MainWindow", "Ticket Number", nullptr));
        lb_timestamp->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Agent", nullptr));
        lb_priority->setText(QCoreApplication::translate("MainWindow", "Prioity", nullptr));
        lb_impact->setText(QCoreApplication::translate("MainWindow", "Impact", nullptr));
        lb_urgency->setText(QCoreApplication::translate("MainWindow", "Urgency", nullptr));
        lb_incident_cat->setText(QCoreApplication::translate("MainWindow", "Incident Category", nullptr));
        lb_tags->setText(QCoreApplication::translate("MainWindow", "Tags", nullptr));
#if QT_CONFIG(tooltip)
        lb_display_ticketnum->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Ticket Number</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lb_display_ticketnum->setText(QString());
        lb_display_symptoms->setText(QString());
        lb_display_Agent->setText(QString());
        lb_display_timestamp->setText(QString());
        lb_display_levelsupport->setText(QString());
        lb_display_Incidentcat->setText(QString());
        lb_display_impact->setText(QString());
        lb_display_priority->setText(QString());
        lb_display_tags->setText(QString());
        lb_display_urgency->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Contact Details", nullptr));
        lb_display_phone->setText(QString());
        lb_display_email->setText(QString());
        lb_display_name->setText(QString());
        lb_phone->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        lb_email->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        lb_name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        lblImage->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuThemes->setTitle(QCoreApplication::translate("MainWindow", "Themes", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
