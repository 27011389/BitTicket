#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QListWidgetItem>
#include <QVector>
#include "ticket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void handleMenuTicketNew();
    void removeSelectedTicket();
    void handleTicketClick();
    void handleMenuTicketEdit();
    void handleMenuExit();
    void handleSaveTickets();
    void handleLoadTickets();
    void handleTicketStats();

private:
    Ui::MainWindow *ui;
    QVector<Ticket*> ticketList;
    QWidget * QMainWindow;

};
#endif // MAINWINDOW_H
