#ifndef TIME_H
#define TIME_H

// Time.h

#include <iostream>
using std::ostream;

class Time
{
  private:
    int hour;
    int minute;

  public:
    Time();
    Time(const int h, const int m);
    Time& operator=(const Time& t);
    Time operator+(const Time& t);
    Time operator-(const Time& t);
    bool operator>(const Time& t);
    bool operator<(const Time& t);

  friend ostream& operator<<(ostream& out, const Time& t);
};

#endif // TIME_H
