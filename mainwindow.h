#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QListWidgetItem>
#include <QVector>
#include <QPropertyAnimation>
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
    void searchProduct();
    void handleThemeSpyBot();
    void handleThemeGravira();
private slots:
    void on_actionAbout_Qt_triggered();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    QVector<Ticket*> ticketList;
    QWidget * QMainWindow;
    //QPropertyAnimation *animation;

};
#endif // MAINWINDOW_H
