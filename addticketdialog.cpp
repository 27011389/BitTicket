#include "addticketdialog.h"
#include "ui_addticketdialog.h"

#include <QDir>
#include <QMessageBox>
#include <QFileDialog>

addticketdialog::addticketdialog(Ticket*& newTicket, QWidget *parent) : QDialog(parent), ui(new Ui::addticketdialog)
{
    ui->setupUi(this);
    this->newTicket = &newTicket;

    connect(ui->pushButton, &QPushButton::clicked,this, &addticketdialog::confirmAdd);

    //population of combo box for Incident Category
    incident.push_back("Solved");
    incident.push_back("Not Solved");
    incident.push_back("Ongoing");
    ui->comboBox_7->addItems(incident);

    //population of combo box for tags
    tag.push_back("Hardware");
    tag.push_back("Software");
    tag.push_back("Account Management");
    tag.push_back("Applications");
    tag.push_back("Finance");
    tag.push_back("Human Resources");
    tag.push_back("Networking");
    tag.push_back("Other");
    //Custom Add needs to be added
    ui->comboBox_8->addItems(tag);

    //population of combo box for Impact
    impact.push_back("Low");
    impact.push_back("Medium");
    impact.push_back("High");
    ui->comboBox_9->addItems(impact);

    //population of combo box for Urgency
    urgency.push_back("Low");
    urgency.push_back("Medium");
    urgency.push_back("High");
    ui->comboBox_10->addItems(urgency);

    //population of combo box for Priority
    priority.push_back("None");
    priority.push_back("Low");
    priority.push_back("Medium");
    priority.push_back("High");
    priority.push_back("Critical");
    ui->comboBox_11->addItems(priority);

    //population of combo box for Level of support
    level.push_back("Tier 1");
    level.push_back("Tier 2");
    level.push_back("Tier 3");
    ui->comboBox_12->addItems(level);

}

addticketdialog::~addticketdialog()
{
    delete ui;
}

void addticketdialog::confirmAdd()
{
    //connection
    QString id = ui->lineEdit_2->text();
    QString incident = ui->comboBox_7->currentText();
    QString tag = ui->comboBox_8->currentText();;
    QString impact = ui->comboBox_9->currentText();;
    QString urgency = ui->comboBox_10->currentText();;
    QString priority = ui->comboBox_11->currentText();;
    QString time = ui->dateTimeEdit_2->text();
    QString symptoms = ui->txtSymptoms->text();
    QString level = ui->comboBox_12->currentText();
    QString rating  = ui->txtRating->text();
    QString name = ui->lineEdit_13->text();
    QString email = ui->lineEdit_14->text();
    QString phone  = ui->lineEdit_15->text();

    //checking conditions
    if (id.isEmpty() || incident.isEmpty() || tag.isEmpty() || impact.isEmpty() || urgency.isEmpty() || priority.isEmpty() || level.isEmpty())
    {
        //error message for the checking conditions are not met
        QString message(tr("All information is required, Please complete the form to proceed."));
        QMessageBox::information(this, tr("Add Ticket"), message);
    }
    else
    {
        //passing and closing
        *newTicket = new Ticket (id, incident, tag, impact, urgency, priority, time, symptoms, level, rating, name, email, phone);
         this->close();
    }

}
