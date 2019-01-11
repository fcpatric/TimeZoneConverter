// A program where you can convert the time in a different place
// Ex. Convert the time in California to New York
// User must enter the time, date and the daylight savings time offset

// TimeZoneConverter.h

#ifndef TIMEZONECONVERTER_H
#define TIMEZONECONVERTER_H

#include <iostream>
using std::ostream;

#include <string>
using std::string;

#include "Date.h"
#include "Time.h"

class TimeZoneConverter
{
  private:
    Time fromTime;
    Time toTime;
    string fromPlace;
    string toPlace;
    Date fromDate;
    Date toDate;

  public:
    TimeZoneConverter(Time& fT, Date& fD, string fP, string tP, Time& DST);
    Time UTC(string place);

  friend ostream& operator<<(ostream& out, const TimeZoneConverter& tC);
};

#endif // TIMEZONECONVERTER_H
