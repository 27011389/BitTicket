#ifndef ADDTICKETDIALOG_H
#define ADDTICKETDIALOG_H

#include <QDialog>
#include "ticket.h"

namespace Ui {
class addticketdialog;
}

class addticketdialog : public QDialog
{
    Q_OBJECT

public:
    explicit addticketdialog(Ticket*& newTicket, QWidget *parent = nullptr);
    ~addticketdialog();

    void confirmAdd();
    void loadItemImage();

private:
    Ui::addticketdialog *ui;
    Ticket** newTicket;

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
    QStringList status;
    QStringList incstatus;
    QStringList rating;
    QString imageFilePath;
};

#endif // ADDTICKETDIALOG_H
