#include "editticketdialog.h"
#include "ui_editticketdialog.h"

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

editticketdialog::editticketdialog(Ticket* editTicket,QWidget *parent) : QDialog(parent), ui(new Ui::editticketdialog)
{
    ui->setupUi(this);
    //population of combo box for Incident Category
    incident.push_back("Solved");
    incident.push_back("Not Solved");
    incident.push_back("Ongoing");
    incident.push_back("");
    ui->comboBox_5->addItems(incident);
    ui->comboBox_5->setCurrentIndex(3);

    //population of combo box for tags
    tag.push_back("Hardware");
    tag.push_back("Software");
    tag.push_back("Account Management");
    tag.push_back("Applications");
    tag.push_back("Finance");
    tag.push_back("Human Resources");
    tag.push_back("Networking");
    tag.push_back("Other");
    tag.push_back("");
    //Custom Add needs to be added
    ui->comboBox_4->addItems(tag);
    ui->comboBox_4->setCurrentIndex(8);

    //population of combo box for Impact
    impact.push_back("Low");
    impact.push_back("Medium");
    impact.push_back("High");
    impact.push_back("");
    ui->comboBox_6->addItems(impact);
    ui->comboBox_6->setCurrentIndex(3);

    //population of combo box for Urgency
    urgency.push_back("Low");
    urgency.push_back("Medium");
    urgency.push_back("High");
    urgency.push_back("");
    ui->comboBox_3->addItems(urgency);
    ui->comboBox_3->setCurrentIndex(3);

    //population of combo box for Priority
    priority.push_back("None");
    priority.push_back("Low");
    priority.push_back("Medium");
    priority.push_back("High");
    priority.push_back("Critical");
    priority.push_back("");
    ui->comboBox_2->addItems(priority);
    ui->comboBox_3->setCurrentIndex(5);

    //population of combo box for Level of support
    level.push_back("Tier 1");
    level.push_back("Tier 2");
    level.push_back("Tier 3");
    level.push_back("");
    ui->comboBox->addItems(level);
    ui->comboBox_3->setCurrentIndex(3);


    this->editTicket = editTicket;

    if (editTicket != nullptr)
    {
        ui->lb_ticket_num->setText(editTicket->getTickId());

        ui->comboBox_5->setCurrentText(editTicket->getTickId());
        ui->comboBox_4->setCurrentText(editTicket->getTickTag());
        ui->comboBox_6->setCurrentText(editTicket->getTickImpact());
        ui->comboBox_3->setCurrentText(editTicket->getTickUrgency());
        ui->comboBox_2->setCurrentText(editTicket->getTickPriority());
        ui->comboBox->setCurrentText(editTicket->getTickLevel());
        //ui->dateTimeEdit->setDateTime(editTicket->getTickTime());
        ui->lineEdit_4->setText(editTicket->getTickSymptoms());
        ui-> txtRating->setText(editTicket->getTickRating());
        ui->lineEdit_10->setText(editTicket->getTickName());
        ui->lineEdit_11->setText(editTicket->getTickPhone());
        ui->lineEdit_12->setText(editTicket->getTickEmail());

    }
    //connection
    connect(ui->pushButton, &QPushButton::clicked,this, &editticketdialog::confirmUpdate);

}

editticketdialog::~editticketdialog()
{
    delete ui;
}

void editticketdialog::confirmUpdate()
{
    //connection
    //QString id = ui->lineEdit->text();

    QString incident = ui->comboBox_5->currentText();
    QString tag = ui->comboBox_4->currentText();;
    QString impact = ui->comboBox_6->currentText();;
    QString urgency = ui->comboBox_3->currentText();;
    QString priority = ui->comboBox_2->currentText();;
    //QString time = ui->dateTimeEdit->text();
    QString symptoms = ui->lineEdit_4->text();
    QString level = ui->comboBox->currentText();
    QString rating  = ui->txtRating->text();
    QString name = ui->lineEdit_10->text();
    QString email = ui->lineEdit_11->text();
    QString phone  = ui->lineEdit_12->text();

    //checking conditions
    if (!(symptoms.isEmpty()))
    {

        editTicket->setIncidentCat(incident);
        editTicket->setTickTag(tag);
        editTicket->setTickImpact(impact);
        editTicket->setTickUrgency(urgency);
        editTicket->setTickPriority(priority);
        editTicket->setTickSymptoms(symptoms);
        editTicket->setTickLevel(level);
        editTicket->setTickRating(rating);
        editTicket->setTickName(name);
        editTicket->setTickEmail(email);
        editTicket->setTickPhone(phone);

        this->close();
    }
    else
    {
        //error message for the checking conditions are not met
        QString message(tr("All information is required, Please complete the form to proceed."));
        QMessageBox::information(this, tr("Add Ticket"), message); //passing and closing
        //editTicket = new Ticket (id, incident, tag, impact, urgency, priority, time, symptoms, level, rating, name, email, phone);

    }
}
