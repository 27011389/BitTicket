#include "addticketdialog.h"
#include "ui_addticketdialog.h"

#include <QDir>
#include <QMessageBox>
#include <QFileDialog>
#include <QRandomGenerator>
#include <QTextStream>
#include <QDate>
#include <QTime>
#include <QListView>

addticketdialog::addticketdialog(Ticket*& newTicket, QWidget *parent) : QDialog(parent), ui(new Ui::addticketdialog)
{
    ui->setupUi(this);
    this->newTicket = &newTicket;
    imageFilePath = "none.png"; //default

    connect(ui->pushButton, &QPushButton::clicked,this, &addticketdialog::confirmAdd);
    connect(ui->pushButton_2, &QPushButton::clicked,this, &addticketdialog::loadItemImage);

    QDir pathDir("./images");
    if(!pathDir.exists())
    {
        //create it
        QDir().mkdir("./images");
    }

    int num = QRandomGenerator::global()->bounded(0,100);
    QDate date = QDate::currentDate();
    QTime time1 = QTime::currentTime();
    QString str3 = date.toString("dd-MM-yyyy");
    QString str4 = time1.toString("hh-mm-ss");
    QString str = QString::number(num);
    QString id = "Ticket-" + str + "-" + str3 + "-" + str4;

    ui->lineEdit_2->setText(id);

    //population of combo box for Incident Category
    incident.push_back("Hardware");
    incident.push_back("Software");
    incident.push_back("Account Management");
    incident.push_back("Applications");
    incident.push_back("Finance");
    incident.push_back("Human Resources");
    incident.push_back("Networking");
    incident.push_back("Other");
    incident.push_back("");
    ui->comboBox_7->addItems(incident);
    ui->comboBox_7->setCurrentIndex(8);
    qobject_cast<QListView *>(ui->comboBox_7->view())->setRowHidden(8, true);

    //population of combo box for Impact
    impact.push_back("Low");
    impact.push_back("Medium");
    impact.push_back("High");
    impact.push_back("");
    ui->comboBox_9->addItems(impact);
    ui->comboBox_9->setCurrentIndex(3);
    qobject_cast<QListView *>(ui->comboBox_9->view())->setRowHidden(3, true);

    //population of combo box for Urgency
    urgency.push_back("Low");
    urgency.push_back("Medium");
    urgency.push_back("High");
    urgency.push_back("");
    ui->comboBox_10->addItems(urgency);
    ui->comboBox_10->setCurrentIndex(3);
    qobject_cast<QListView *>(ui->comboBox_10->view())->setRowHidden(3, true);

    //population of combo box for Priority
    priority.push_back("None");
    priority.push_back("Low");
    priority.push_back("Medium");
    priority.push_back("High");
    priority.push_back("Critical");
    priority.push_back("");
    ui->comboBox_11->addItems(priority);
    ui->comboBox_11->setCurrentIndex(5);
    qobject_cast<QListView *>(ui->comboBox_11->view())->setRowHidden(5, true);

    //population of combo box for Level of support
    level.push_back("Tier 1");
    level.push_back("Tier 2");
    level.push_back("Tier 3");
    level.push_back("");
    ui->comboBox_12->addItems(level);
    ui->comboBox_12->setCurrentIndex(3);
    qobject_cast<QListView *>(ui->comboBox_12->view())->setRowHidden(3, true);

    //Ticket status
    status.push_back("Closed");
    status.push_back("Re-opened");
    status.push_back("");
    ui->comboBox_TS->addItems(status);
    ui->comboBox_TS->setCurrentIndex(2);
    qobject_cast<QListView *>(ui->comboBox_TS->view())->setRowHidden(2, true);

    //Incident Status
    incstatus.push_back("Solved");
    incstatus.push_back("Not Solved");
    incstatus.push_back("Ongoing");
    incstatus.push_back("");
    ui->comboBox_IS->addItems(incstatus);
    ui->comboBox_IS->setCurrentIndex(3);
    qobject_cast<QListView *>(ui->comboBox_IS->view())->setRowHidden(3, true);

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
    QString tag = ui->lineEdittags->text();;
    QString impact = ui->comboBox_9->currentText();;
    QString urgency = ui->comboBox_10->currentText();;
    QString priority = ui->comboBox_11->currentText();;
    QString time = ui->dateTimeEdit_2->text();
    QString symptoms = ui->txtSymptoms1->text();
    QString level = ui->comboBox_12->currentText();
    QString rating  = ui->txtRating->text();
    QString name = ui->lineEdit_13->text();
    QString email = ui->lineEdit_14->text();
    QString phone  = ui->lineEdit_15->text();
    QString agent = ui->lineEditAgent->text();
    QString status = ui->comboBox_TS->currentText();
    QString incstatus = ui->comboBox_IS->currentText();

    if(rating.isEmpty())
    {
        QFile outputFile("Queries.txt");
        outputFile.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&outputFile);

            out << id <<",";
            out << incident <<",";
            out << tag<<",";
            out << impact <<",";
            out << urgency <<",";
            out << priority<<",";
            out << time<<",";
            out << symptoms<<",";
            out << level<<",";
            out << rating<<",";
            out << name<<",";
            out << email<<",";
            out << phone<<",";
            out << agent<<",";
            out << status<<",";
            out << incstatus<<"\n";
    }

    if(!(agent.isEmpty()))
    {
        QFile outputFile("Assignment.txt");
        outputFile.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&outputFile);

            out << agent<<",";
            out << id <<",";
            out << incident <<",";
            out << tag<<",";
            out << time<<",";
            out << symptoms<<"\n";

    }

    if(!(level.isEmpty()))
    {
        QFile outputFile("Support.txt");
        outputFile.open(QIODevice::Append | QIODevice::Text);
        QTextStream out(&outputFile);

            out << level<<",";
            out << agent<<",";
            out << id <<",";
            out << incident <<",";
            out << tag<<",";
            out << time<<",";
            out << symptoms<<"\n";

    }

    //checking conditions
    if (id.isEmpty() || incident.isEmpty() || tag.isEmpty() || impact.isEmpty() || 
        urgency.isEmpty() || priority.isEmpty() || level.isEmpty())
    {
        //error message for the checking conditions are not met
        QString message(tr("All information is required, Please complete the form to proceed."));
        QMessageBox::information(this, tr("Add Ticket"), message);
    }
    else
    {
        //passing and closing
        *newTicket = new Ticket (id, incident, tag, impact, urgency, priority, time, symptoms, level, rating, name, email, phone, agent, status, incstatus , imageFilePath);
         this->close();
    }

}

void addticketdialog::loadItemImage()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image Files (*.png *.jpg)");

    if (filename != "")
    {
        int lastSlash = filename.lastIndexOf("/");
        QString shortName = filename.right(filename.size() - lastSlash - 1);
        QFile::copy(filename, "./images/" + shortName);
        QPixmap pixmap("./images/" + shortName);
        ui->lblImage->setPixmap(pixmap);
        ui->lblImage->setScaledContents(true);
        imageFilePath = "./images/" + shortName;
    }
} //end load item image
