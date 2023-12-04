#include "date.h"

int date::month() const {
return _month;
}
int date::day() const {
return _day;
}
int date::year() const {
    return _year;
}
void date::updateMonth(int month) {
    this->_month = month;
}

void date::updateDay(int day){
    this->_day=day;
}
void date::updateyear(int year ){
    this->_year=year;
}
string date::toString() const{
    return to_string(this->year())+"/"+to_string(this->month())+"/"+to_string(this->day());
}
