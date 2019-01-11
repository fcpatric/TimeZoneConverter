// TimeZoneConverter.cpp

#include "Date.h"
#include "Time.h"
#include "TimeZoneConverter.h"

Time TimeZoneConverter::UTC(string place)
{
	// UTC-12:00
	if ( place == "International Date Line West" )
		return Time(-12, 0);

	// UTC-11:00
  if( place == "Coordinated Universal Time-11" )
    return Time(-11, 0);

  // UTC-10:00
  if( place == "Hawaii" )
    return Time(-10, 0);

  // UTC-9:00
  if( place == "Alaska" )
    return Time(-9, 0);

  // UTC-8:00
  if( place == "Baja California" ||
      place == "California, United States" )
    return Time(-8, 0);

  // UTC-7:00
  if( place == "Arizona" ||
      place == "Chihuahua, La Paz, Mazatlan" ||
      place == "Mountain Time(US & Canada)" )
    return Time(-7, 0);

  // UTC-6:00
  if( place == "Central America" ||
      place == "Central Time(US & Canada)" ||
      place == "Easter Island" ||
      place == "Guadalajara, Mexico City, Monterrey" ||
      place == "Saskatchewan" )
    return Time(-6,0);

  // UTC-5:00
  if( place == "Bogota, Lima, Quito, Rio Branco" ||
      place == "Chetumal" ||
      place == "Eastern Time(US & Canada)" ||
      place == "Haiti" ||
      place == "Indiana(East)" )
    return Time(-5,0);

  // UTC-4:30
  if( place == "Caracas" )
    return Time(-4,30);

  // UTC-4:00
  if( place == "Asuncion" ||
      place == "Atlantic Time(Canada)" ||
      place == "Cuiaba" ||
      place == "Georgetown, La Paz, Manaus, San Juan" ||
      place == "Santiago" )
    return Time(-4, 0);

  // UTC-3:30
  if( place == "Newfoundland" )
    return Time(-3, 30);

  // UTC-3:00
  if( place == "Brasilia" ||
      place == "Cayenne, Fortaleza" ||
      place == "City of Buenos Aires" ||
      place == "Greenland" ||
      place == "Montevideo" ||
      place == "Salvador" )
    return Time(-3, 0);

  // UTC-2:00
  if( place == "Coordinated Universal Time-02" )
    return Time(-2, 0);

  // UTC-1:00
  if( place == "Azores" ||
      place == "Cabo Verde Is." )
    return Time(-1, 0);

  // UTC0:00
  if( place == "Casablanca" ||
      place == "Coordinated Universal Time" ||
      place == "Dublin, Edinburgh, Lisbon, London" ||
      place == "Monrovia, Reykjavik" )
    return Time(0, 0);

  //UTC+1:00
  if( place == "Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna" ||
      place == "Belgrade, Bratislava, Budapest, Ljubljana, Prague" ||
      place == "Brussels, Copenhagen, Madrid, Paris" ||
      place == "Sarajevo, Skopje, Warsaw, Zagred" ||
      place == "West Central Africa" ||
      place == "Windhoek" )
    return Time(1, 0);

  // UTC+2:00
  if( place == "Amman" ||
      place == "Athens, Bucharest" ||
      place == "Beirut" ||
      place == "Cairo" ||
      place == "Damascus" ||
      place == "E. Europe" ||
      place == "Harare, Pretoria" ||
      place == "Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius" ||
      place == "Istanbul" ||
      place == "Jerusalem" ||
      place == "Kaliningrad" ||
      place == "Tripoli" )
    return Time(2,0);

  // UTC+3:00
  if( place == "Baghdad" ||
      place == "Kuwait, Riyadh" ||
      place == "Minsk" ||
      place == "Moscow, St.Petersburg, Volgograd" ||
      place == "Nairobi" )
    return Time(3, 0);

  // UTC+3:30
  if( place == "Tehran" )
    return Time(3, 30);

  // UTC+4:00
  if( place == "Astrakhan, Ulyanovsk" ||
      place == "Abu Dhabi, Muscat" ||
      place == "Baku" ||
      place == "Izhevsk, Samara" ||
      place == "Port Louis" ||
      place == "Tbilisi" ||
      place == "Yerevan" )
    return Time(4, 0);

  // UTC+4:30
  if( place == "Kabul" )
    return Time(4, 30);

  // UTC+5:00
  if( place == "Islamabad, Karachi" ||
      place == "Ekaterinburg" ||
      place == "Ashgabat, Tashkent" )
    return Time(5, 0);

  // UTC+5:30
  if( place == "Chennai, Kolkota, Mumbai, New Delhi" ||
     place == "Sir Jayawardenepura" )
    return Time(5, 30);

  // UTC+5:45
  if( place == "Kathmandu" )
    return Time(5, 45);

  // UTC+6:00
  if( place == "Novosibirsk" ||
      place == "Dhaka" ||
      place == "Astana" )
    return Time(6, 0);

  // UTC+6:30
  if( place == "Yangon(Rangoon)" )
    return Time(6, 30);

  // UTC+7:00
  if( place == "Krasnoyarsk" ||
      place == "Bangkok, Hanoi, Jakarta" ||
      place == "Barnaul, Gorno-Altaysk" )
    return Time(7, 0);

  // UTC+8:00
  if( place == "Ulaanbataar" ||
      place == "Taipei" ||
      place == "Perth" ||
      place == "Kuala Lumpur, Singapore" ||
      place == "Irkutsk" ||
      place == "Beijing, Chongqing, Hong Kong, Urumqi" ||
      place == "Manila, Philippines" )
    return Time(8, 0);

  // UTC+8:30
  if( place == "Pyongyang" )
    return Time(8, 30);

  // UTC+9:00
  if( place == "Yakutsk" ||
      place == "Seoul" ||
      place == "Osaka, Sapporo, Tokyo" ||
      place == "Chita" )
    return Time(9, 0);

  // UTC+9:30
  if( place == "Darwin" ||
      place == "Adelaide" )
    return Time(9, 30);


  // UTC+10:00
  if( place == "Vladivostok" ||
      place == "Magadan" ||
      place == "Hobart" ||
      place == "Guam, Port Moresby" ||
      place == "Canberra, Melbourne, Sydney" ||
      place == "Brisbane" )
    return Time(10, 0);

  // UTC+11:00
  if( place == "Solomon Is., New Caledonia" ||
      place == "Chokurdakh" ||
      place == "Sakhalin" )
    return Time(11, 0);

  // UTC+12:00
  if( place == "Fiji" ||
      place == "Auckland, Wellington" ||
      place == "Anadyr, Petropavlovsk-Kamchatsky" )
    return Time(12, 0);

  // UTC+13:00
  if( place == "Samoa"  ||
      place == "Nuku'alofa" )
    return Time(13, 0);

  // UTC+14:00
  if( place == "Kiritimati Islad" )
    return Time(14, 0);
}

TimeZoneConverter::TimeZoneConverter(Time& fT, Date& fD, string fP, string tP , Time& DST)
{
  fromTime = fT;
  fromPlace = fP;
  toPlace = tP;
  fromDate = fD;

  Time UTCDiff = UTC(tP) - UTC(fP);
  Time rawToTime = fT + UTCDiff + DST;

  Time adjustTime1(24, 0);
  Time adjustTime2(0, 0);

  if( rawToTime < adjustTime1 && rawToTime > adjustTime2 )
  {
    toTime = rawToTime;
    toDate = fromDate;
  }

  if( rawToTime > adjustTime1 )
  {
    Date adjustDate(0, 1 , 0);
    toTime = rawToTime - adjustTime1;
    toDate = fromDate + adjustDate;
  }

  if( rawToTime < adjustTime2 )
  {
    Date adjustDate(0, 1 , 0);
    toTime = rawToTime + adjustTime1;
    toDate = fromDate - adjustDate;
  }
}

ostream& operator<<(ostream& out, const TimeZoneConverter& tC)
{
  out << tC.fromDate << " at ";
  out << tC.fromTime << " in " << tC.fromPlace << "\n";
  out << tC.toDate << " at ";
  out << tC.toTime << " in " << tC.toPlace;
  return out;
}

