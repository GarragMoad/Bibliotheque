#ifndef DATE_H
#define DATE_H

#include "entete.h">

class date
{
public:

    date(int y=0000 , int m=00 , int j=00 ):_month(m),_day(j), _year(y){} ;
    int month() const;
    int day() const;
    int year() const;
    void updateMonth(int month);
    void updateDay(int day);
    void updateyear(int year);
    string toString() const;

    private:
    int _month;
    int _day;
    int _year;
};

#endif // DATE_H
