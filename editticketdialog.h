#ifndef EDITTICKETDIALOG_H
#define EDITTICKETDIALOG_H

#include <QDialog>
#include "ticket.h"

namespace Ui {
class editticketdialog;
}

class editticketdialog : public QDialog
{
    Q_OBJECT

public:
    explicit editticketdialog(Ticket* currentTicket,QWidget *parent = nullptr);
    ~editticketdialog();

    void confirmUpdate();

private:
    Ui::editticketdialog *ui;
    Ticket* editTicket;

    QStringList id;
    QStringList incident;
    QStringList tag;
    QStringList impact;
    QStringList urgency;
    QStringList priority;
    QStringList level;
    QStringList symptoms;
    QStringList name;
    QStringList email;
    QStringList phone;
    QStringList agent;
//    QStringList status;
//    QStringList incstatus;

};

#endif // EDITTICKETDIALOG_H

