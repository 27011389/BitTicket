#include "editticketdialog.h"
#include "ui_editticketdialog.h"

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

editticketdialog::editticketdialog(Ticket* editTicket,QWidget *parent) : QDialog(parent), ui(new Ui::editticketdialog)
{
    ui->setupUi(this);
    this->editTicket = editTicket;

    connect(ui->pushButton, &QPushButton::clicked,this, &editticketdialog::confirmUpdate);

    //population of combo box for Incident Category
    incident.push_back("Solved");
    incident.push_back("Not Solved");
    incident.push_back("Ongoing");
    ui->comboBox_5->addItems(incident);

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
    ui->comboBox_4->addItems(tag);

    //population of combo box for Impact
    impact.push_back("Low");
    impact.push_back("Medium");
    impact.push_back("High");
    ui->comboBox_6->addItems(impact);

    //population of combo box for Urgency
    urgency.push_back("Low");
    urgency.push_back("Medium");
    urgency.push_back("High");
    ui->comboBox_3->addItems(urgency);

    //population of combo box for Priority
    priority.push_back("None");
    priority.push_back("Low");
    priority.push_back("Medium");
    priority.push_back("High");
    priority.push_back("Critical");
    ui->comboBox_2->addItems(priority);

    //population of combo box for Level of support
    level.push_back("Tier 1");
    level.push_back("Tier 2");
    level.push_back("Tier 3");
    ui->comboBox->addItems(level);

}

editticketdialog::~editticketdialog()
{
    delete ui;
}

void editticketdialog::confirmUpdate()
{
    //connection
    QString id = ui->lineEdit->text();
    QString incident = ui->comboBox_5->currentText();
    QString tag = ui->comboBox_4->currentText();;
    QString impact = ui->comboBox_6->currentText();;
    QString urgency = ui->comboBox_3->currentText();;
    QString priority = ui->comboBox_2->currentText();;
    QString time = ui->dateTimeEdit->text();
    QString symptoms = ui->lineEdit_4->text();
    QString level = ui->comboBox->currentText();
    QString rating  = ui->txtRating->text();
    QString name = ui->lineEdit_10->text();
    QString email = ui->lineEdit_11->text();
    QString phone  = ui->lineEdit_12->text();

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
        editTicket = new Ticket (id, incident, tag, impact, urgency, priority, time, symptoms, level, rating, name, email, phone);
        this->close();
    }
}
