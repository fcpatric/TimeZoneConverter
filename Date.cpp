// Date.cpp

#include <iostream>
using std::ostream;

#include <string>
using std::string;

#include "Date.h"

Date::Date()
{
  month = day = year = 0;
}

Date::Date( const int mo, const int da, const int y)
{
  month = mo;
  day = da;
  year = y;
}

Date& Date::operator=(const Date& d)
{
  month = d.month;
  day = d.day;
  year = d.year;

  return *this;
}

Date Date::operator+(const Date& d)
{
  int newmonth = month + d.month;
  int newDay = day + d.day;
  int newYear = year + d.year;

  return Date(newmonth, newDay, newYear);
}

Date Date::operator-(const Date& d)
{
  int newmonth = month - d.month;
  int newDay = day - d.day;
  int newYear = year - d.year;

  return Date(newmonth, newDay, newYear);
}

void Date::setMonth(const int n)
{
  month = n;
}

void Date::setDay(const int n)
{
  day = n;
}

void Date::setYear(const int n)
{
  year = n;
}

int Date::getMonth() const
{
  return month;
}

int Date::getDay() const
{
  return day;
}

int Date::getYear() const
{
  return year;
}

string Date::nameOfMonth( const int m ) const
{
  if( m == 1 )
    return "January";

  if( m == 2 )
    return "February";

  if( m == 3 )
    return "March";

  if( m == 4 )
    return "April";

  if( m == 5 )
    return "May";

  if( m == 6 )
    return "June";

  if( m == 7 )
    return "July";

  if( m == 8 )
    return "August";

  if( m == 9 )
    return "September";

  if( m == 10 )
    return "October";

  if( m == 11 )
    return "November";

  if( m == 12 )
    return "December";

}

ostream& operator<<(ostream& out, const Date& d)
{
  string monthName = d.nameOfMonth(d.month);

  out << monthName << " " << d.day << ", " << d.year;

  return out;
}
