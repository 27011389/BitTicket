#include "mainmenu.h"
#include "ui_mainmenu.h"
#include "addticketdialog.h"
#include "editticketdialog.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QListWidget>
#include <QAction>


mainmenu::mainmenu(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainmenu)
{
    ui->setupUi(this);

    connect(ui->actionNew, &QAction::triggered, this, &mainmenu::handleMenuTicketNew);
    connect(ui->actionLoad, &QAction::triggered, this, &mainmenu::handleLoadTickets);
    connect(ui->actionSave, &QAction::triggered, this, &mainmenu::handleSaveTickets);
    connect(ui->actionExit, &QAction::triggered, this, &mainmenu::handleMenuExit);
    connect(ui->pb_remove, &QPushButton::clicked, this, &mainmenu::removeSelectedTicket);
}

mainmenu::~mainmenu()
{
    //free up ticket list memory
    for (int i=0; i<ticketList.size(); i++)
    {
        delete ticketList.at(i);
    }

    ticketList.clear();

    delete ui;
}

void mainmenu::handleMenuTicketNew()
{
    Ticket* newTicket = nullptr;
    addticketdialog addTicketDialog(newTicket, nullptr);

    addTicketDialog.setModal(true);
    addTicketDialog.exec();

    if (newTicket != nullptr)
    {
        ticketList.push_back(newTicket);
        //ui->lst_tickets->addItem(newTicket->getTickId());
    }
} //end handleMenuItemNew


void mainmenu::removeSelectedTicket()
{
    int index = ui->lst_tickets->currentRow();

    if (index >= 0)
    {
        //remove from vector
        Ticket* theItem = ticketList.at(index);
        delete theItem;
       ticketList.removeAt(index);

        //remove from list widget in the UI
        delete ui->lst_tickets->currentItem();
    }
    //ticket details set to ""
    ui->lb_display_ticketnum->setText("");
    ui->lb_display_Incidentcat->setText("");
    ui->lb_display_impact->setText("");
    ui->lb_display_levelsupport->setText("");
    ui->lb_display_priority->setText("");
    ui->lb_display_symptoms->setText("");
    ui->lb_display_tags->setText("");
    ui->lb_display_timestamp->setText("");
    ui->lb_display_urgency->setText("");

    //User details set to ""
    ui->lb_display_name->setText("");
    ui->lb_display_phone->setText("");
    ui->lb_display_email->setText("");


} //end removeSelectedProduct

void mainmenu::handleTicketClick(QListWidgetItem* Ticket)
{
    {
        int index = Ticket->listWidget()->currentRow();

        if (index != -1)
        {
            Ticket* currentItem = ticketList.at(index);

            if (currentItem != nullptr)
            {
                ui->lb_display_ticketnum->setText("");
                ui->lb_display_Incidentcat->setText("");
                ui->lb_display_impact->setText("");
                ui->lb_display_levelsupport->setText("");
                ui->lb_display_priority->setText("");
                ui->lb_display_symptoms->setText("");
                ui->lb_display_tags->setText("");
                ui->lb_display_timestamp->setText("");
                ui->lb_display_urgency->setText("");

                ui->lb_display_name->setText("");
                ui->lb_display_phone->setText("");
                ui->lb_display_email->setText("");

            } //end inner if
        } //end if
    }// end handle item click
}

void mainmenu::handleMenuTicketEdit()
{
    int index = ui->lst_tickets->currentRow();

    if (index != -1)
    {
        Ticket* currentItem = ticketList.at(index);

        if (currentItem != nullptr)
        {
            editticketdialog editticketdialog(currentItem, nullptr);
            editticketdialog.exec();

            //make sure UI is updated
            ui->lb_display_ticketnum->setNum(currentItem->getTickId());
            ui->lb_display_Incidentcat->setText(currentItem->getIncidentCat());
            ui->lb_display_impact->setText(currentItem->getTickImpact());
            ui->lb_display_levelsupport->setNum(currentItem->getTickLevel());
            ui->lb_display_priority->setText(currentItem->getTickPriority());
            ui->lb_display_symptoms->setText(currentItem->getTickSymptoms());
            ui->lb_display_tags->setText(currentItem->getTickTag());
            //ui->lb_display_timestamp->setText();
            ui->lb_display_urgency->setText(currentItem->getTickUrgency());

            ui->lb_display_name->setText(currentItem->getName());
            ui->lb_display_phone->setNum(currentItem->getPhone());
            ui->lb_display_email->setText(currentItem->getEmail());

        }//end inner if
    }//end if

}//end handleMenuItemEdit

void mainmenu::handleMenuExit()
{
     this->close();
}

void mainmenu::handleSaveTickets()
{
    QFile outputFile("products.txt");

    outputFile.open(QIODevice::WriteOnly |
                    QIODevice::Text);

    QTextStream out(&outputFile);

    for(Ticket* product:ticketList)
    {
        out << product->getTickId()<<",";
        out << product->getIncidentCat()<<",";
        out << product->getTickTag()<<",";
        out << product->getTickImpact()<<",";
        out << product->getTickUrgency()<<",";
        out << product->getTickPriority()<<",";
        //out << product->getTickTime()<<",";
        out << product->getTickSymptoms()<<",";
        out << product->getTickLevel()<<",";
        out << product->getTickRating()<<endl;

    }

}

void mainmenu::handleLoadTickets()
{

    QFile inputFile("Tickets.txt");
    inputFile.open(QIODevice::ReadOnly |
                   QIODevice::Text);

    QTextStream in(&inputFile);

    //clear current list and vector
    for (Ticket* temp:ticketList)
    {
        delete temp;
    }

    ticketList.clear(); //clear data model
    ui->lst_tickets->clear(); // view / ui

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList info = line.split(",");

        //handle list of products ui
        ui->lst_tickets->addItem(info.at(0));

        //handle vector
        Ticket* product = new Ticket(info.at(0), info.at(1).toInt(),info.at(2));
        ticketList.push_back(product);

    } //end while

    in.flush();
    inputFile.close();

}

void mainmenu::handleTicketStats()
{
 //placeholder
}



