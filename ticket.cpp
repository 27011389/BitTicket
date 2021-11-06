#include "ticket.h"


Ticket::Ticket( QString id, QString incident, QString tag, QString impact, QString urgency, QString priority, QString time, QString symptoms, QString level, QString rating, QString name, QString email, QString phone, QString agent)
{
    this->id = id;
    this->incident = incident;
    this->tag = tag;
    this->impact = impact;
    this->urgency = urgency;
    this->priority = priority;
    this->time = time;
    this->symptoms = symptoms;
    this->level = level;
    this->rating = rating;
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->agent = agent;
//    this->status = status;
//    this->incstatus = incstatus;

}

void Ticket::setTickId(QString id)
{
    this->id = id;
}

QString Ticket::getTickId()
{
    return id;
}

void Ticket::setIncidentCat(QString incident)
{
    this->incident = incident;
}

QString Ticket::getIncidentCat() const
{
    return incident;
}

void Ticket::setTickTag(QString tag)
{
    this->tag = tag;
}

QString Ticket::getTickTag() const
{
    return tag;
}

void Ticket::setTickImpact(QString impact)
{
    this->impact = impact;
}

QString Ticket::getTickImpact() const
{
    return impact;
}

void Ticket::setTickUrgency(QString urgency)
{
    this->urgency = urgency;
}

QString Ticket::getTickUrgency() const
{
    return urgency;
}

void Ticket::setTickPriority(QString priority)
{
    this-> priority = priority;
}

QString Ticket::getTickPriority() const
{
    return priority;
}

void Ticket::setTickTime(QString time)
{
    this->time = time;
}

QString Ticket::getTickTime() const
{
    return time;
}

void Ticket::setTickSymptoms(QString symptoms)
{
    this->symptoms = symptoms;
}

QString Ticket::getTickSymptoms() const
{
    return symptoms;
}

void Ticket::setTickLevel(QString level)
{
    this->level = level;
}

QString Ticket::getTickLevel() const
{
    return level;
}

void Ticket::setTickRating(QString rating)
{
    this->rating = rating;
}

QString Ticket::getTickRating() const
{
    return rating;
}

void  Ticket::setTickName(QString name)
{
    this->name = name;
}

QString Ticket::getTickName() const
{
    return name;
}

void Ticket::setTickEmail(QString email)
{
    this->email = email;
}

QString Ticket::getTickEmail() const
{
    return email;
}
void Ticket::setTickPhone(QString phone)
{
    this->phone = phone;
}

QString Ticket::getTickPhone() const
{
    return phone;
}

void Ticket::setAgent(QString agent)
{
    this->agent = agent;
}

QString Ticket::getAgent() const
{
    return agent;
}




//void Ticket::setTickStatus (QString status)
//{
//    this->status = status;
//}

//QString Ticket::getTickStatus() const
//{
//    return status;
//}

//void Ticket::setIncStatus(QString incstatus)
//{
//    this->incstatus =incstatus;
//}

//QString Ticket::getIncStatus() const
//{
//    return incstatus;
//}

