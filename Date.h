// Date.h

#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::ostream;

#include <string>
using std::string;

class Date
{
  private:
    int month;
    int day;
    int year;

  public:
    Date();
    Date(const int mo, const int da, const int y);
    Date& operator=(const Date& d);
    Date operator+(const Date& d);
    Date operator-(const Date& ds);
    void setMonth(const int n);
    void setDay(const int n);
    void setYear(const int n);
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    string nameOfMonth( const int m ) const;

  friend ostream& operator<<(ostream& out, const Date& d);
};

#endif // DATE_H
