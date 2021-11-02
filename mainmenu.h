#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include <QMainWindow>
#include "ticket.h"
#include <QListWidgetItem>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {class mainmenu;}
QT_END_NAMESPACE

class mainmenu : public QDialog
{
    Q_OBJECT

public:
    explicit mainmenu(QWidget *parent = nullptr);
    ~mainmenu();

    void handleMenuTicketNew();
    void removeSelectedTicket();
    void handleTicketClick(QListWidgetItem* Ticket);
    void handleMenuTicketEdit();
    void handleMenuExit();
    void handleSaveTickets();
    void handleLoadTickets();
    void handleTicketStats();

private slots:
    void on_pb_remove_clicked();

private:
    Ui::mainmenu *ui;
    QVector<Ticket*> ticketList;
    QWidget * QMainWindow;
};

#endif // MAINMENU_H
