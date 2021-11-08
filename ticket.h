#ifndef TICKET_H
#define TICKET_H
#include <QString>
#include <QDate>

class Ticket
{
private:
    QString id;
    QString incident;
    QString tag;
    QString impact;
    QString urgency;
    QString priority;
    QString time;
    QString symptoms;
    QString level;
    QString rating;
    QString name;
    QString email;
    QString phone;
    QString agent;
    QString status;
    QString incstatus;
    QString ImageFilePath;

public:
    Ticket( QString id, QString incident, QString tag, QString impact, QString urgency, QString priority, QString time, QString symptoms, QString level, QString rating, QString name, QString email, QString phone, QString agent, QString status, QString Incstatus, QString ImageFilePath);

    void setTickId(QString id);
    void setIncidentCat(QString incident);
    void setTickTag(QString tag);
    void setTickImpact(QString impact);
    void setTickUrgency(QString urgency);
    void setTickPriority(QString priority);
    void setTickTime(QString time);
    void setTickSymptoms(QString symptoms);
    void setTickLevel(QString level);
    void setTickRating(QString rating);
    void setTickName(QString name);
    void setTickEmail(QString email);
    void setTickPhone(QString phone);
    void setAgent(QString agent);
    void setTickStatus (QString status);
    void setIncStatus(QString incstatus);
    void setImageFilePath(QString incstatus);

    QString getTickId();
    QString getIncidentCat() const;
    QString getTickTag() const;
    QString getTickImpact() const;
    QString getTickUrgency() const;
    QString getTickPriority() const;
    QString getTickTime() const;
    QString getTickSymptoms() const;
    QString getTickLevel() const;
    QString getTickRating() const;
    QString getTickName() const;
    QString getTickEmail() const;
    QString getTickPhone() const;
    QString getAgent() const;
    QString getTickStatus() const;
    QString getIncStatus() const;
    QString getImageFilePath() const;

};

#endif // TICKET_H
