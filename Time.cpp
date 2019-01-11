// Time.cpp

#include <iostream>
using std::ostream;

#include "Time.h"

Time::Time()
{
	hour = minute = 0;
}

Time::Time(const int h, const int m)
{
  hour = h;
  minute = m;
}

Time& Time::operator=(const Time& t)
{
  hour = t.hour;
  minute = t.minute;
  return *this;
}

Time Time::operator+(const Time& t)
{
  int newHour = hour + t.hour;
  int newMinute = minute + t.minute;

  return Time(newHour, newMinute);
}

Time Time::operator-(const Time& t)
{
  int newHour = hour - t.hour;
  int newMinute = minute - t.minute;

  return Time(newHour, newMinute);
}

bool Time::operator>(const Time& t)
{
  return hour > t.hour;
}

bool Time::operator<(const Time& t)
{
  return hour < t.hour;
}

ostream& operator<<(ostream& out, const Time& t)
{
  if( t.hour >= 12 && t.hour < 24 )
  {
    out << t.hour - 12 << ":";

    if ( t.minute < 10 )
      out << "0" << t.minute << " PM";

    else
      out << t.minute << " PM";
  }

  else
  {
    if( t. hour == 24 )
      out << "0:" << t.hour - 12<< ":";

    else
      out << t.hour<< ":";

    if ( t.minute < 10 )
      out << "0" << t.minute << " AM";

    else
      out << t.minute << " AM";
  }

  return out;
}
