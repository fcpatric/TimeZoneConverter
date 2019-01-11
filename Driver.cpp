#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "Date.h"
#include "Time.h"
#include "TimeZoneConverter.h"

int main()
{
  // UTC-12:00
  cout << "UTC-12:00\n";
  cout << "  International Date Line West\n";

	// UTC-11:00
	cout <<"UTC-11:00\n";
  cout << "  Coordinated Universal Time-11\n";

  // UTC-10:00
  cout << "UTC-10:00\n";
  cout << "  Hawaii\n";

  // UTC-9:00
  cout << "UTC-9:00\n";
  cout << "  Alaska\n";

  // UTC-8:00
  cout << "UTC-8:00\n";
  cout << "  Baja California\n";
  cout << "  Pacific Time(US & Canada)\n";

  // UTC-7:00
  cout << "UTC-7:00\n";
  cout << "  Arizona\n";
  cout << "  Chihuahua, La Paz, Mazatlan\n";
  cout << "  Mountain Time(US & Canada)\n";

  // UTC-6:00
  cout << "UTC-6:00\n";
  cout << "  Central America\n";
  cout << "  Central Time(US & Canada)\n";
  cout << "  Easter Island\n";
  cout << "  Guadalajara, Mexico City, Monterrey\n";
  cout << "  Saskatchewan\n";

  // UTC-5:00
  cout << "UTC-5:00\n";
  cout << "  Bogota, Lima, Quito, Rio Branco\n";
  cout << "  Chetumal\n";
  cout << "  Eastern Time(US & Canada)\n";
  cout << "  Haiti\n";
  cout << "  Indiana(East)\n";

  // UTC-4:30
  cout << "UTC-4:30\n";
  cout << "  Caracas\n";

  // UTC-4:00
  cout << "UTC-4:00\n";
  cout << "  Asuncion\n";
  cout << "  Atlantic Time(Canada)\n";
  cout << "  Cuiaba\n";
  cout << "  Georgetown, La Paz, Manaus, San Juan\n";
  cout << "  Santiago\n";

  // UTC-3:30
  cout << "UTC-3:30\n";
  cout << "  Newfoundland\n";

  // UTC-3:00
  cout << "UTC-3:00\n";
  cout << "  Brasilia\n";
  cout << "  Cayenne, Fortaleza\n";
  cout << "  City of Buenos Aires\n";
  cout << "  Greenland\n";
  cout << "  Montevideo\n";
  cout << "  Salvador\n";

  // UTC-2:00
  cout << "UTC-2:00\n";
  cout << "  Coordinated Universal Time-02\n";

  // UTC-1:00
  cout << "UTC-1:00\n";
  cout << "  Azores\n";
  cout << "  Cabo Verde Is.\n";

  // UTC0:00
  cout << "UTC0:00\n";
  cout << "  Casablanca\n";
  cout << "  Coordinated Universal Time\n";
  cout << "  Dublin, Edinburgh, Lisbon, London\n";
  cout << "  Monrovia, Reykjavik\n";

  //UTC+1:00
  cout << "UTC+1:00\n";
  cout << "  Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna\n";
  cout << "  Belgrade, Bratislava, Budapest, Ljubljana, Prague\n";
  cout << "  Brussels, Copenhagen, Madrid, Paris\n";
  cout << "  Sarajevo, Skopje, Warsaw, Zagred\n";
  cout << "  West Central Africa\n";
  cout << "  Windhoek\n";


  // UTC+2:00
  cout << "UTC+2:00\n";
  cout << "  Amman\n";
  cout << "  Athens, Bucharest\n";
  cout << "  Beirut\n";
  cout << "  Cairo\n";
  cout << "  Damascus\n";
  cout << "  E. Europe\n";
  cout << "  Harare, Pretoria\n";
  cout << "  Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius\n";
  cout << "  Istanbul\n";
  cout << "  Jerusalem\n";
  cout << "  Kaliningrad\n";
  cout << "  Tripoli\n";

  // UTC+3:00
  cout << "UTC+3:00\n";
  cout << "  Baghdad\n";
  cout << "  Kuwait, Riyadh\n";
  cout << "  Minsk\n";
  cout << "  Moscow, St.Petersburg, Volgograd\n";
  cout << "  Nairobi\n";

  // UTC+3:30
  cout << "UTC+3:30\n";
  cout << "  Tehran\n";

  // UTC+4:00
  cout << "UTC+3:30\n";
  cout << "  Astrakhan, Ulyanovsk\n";
  cout << "  Abu Dhabi, Muscat\n";
  cout << "  Baku\n";
  cout << "  Izhevsk, Samara\n";
  cout << "  Port Louis\n";
  cout << "  Tbilisi\n";
  cout << "  Yerevan\n";

  // UTC+4:30
  cout << "UTC+4:30\n";
  cout << "  Kabul\n";

  // UTC+5:00
  cout << "UTC+5:00\n";
  cout << "  Islamabad, Karachi\n";
  cout << "  Ekaterinburg\n";
  cout << "  Ashgabat, Tashkent\n";

  // UTC+5:30
  cout << "UTC+5:30\n";
  cout << "  Chennai, Kolkota, Mumbai, New Delhi\n";
  cout << "  Sir Jayawardenepura\n";

  // UTC+5:45
  cout << "UTC+5:45\n";
  cout << "  Kathmandu\n";

  // UTC+6:00
  cout << "UTC+6:00\n";
  cout << "  Astana\n";
  cout << "  Dhaka\n";
  cout << "  Novosibirsk\n";

  // UTC+6:30
  cout << "UTC+6:30\n";
  cout << "  Yangon(Rangoon)\n";

  // UTC+7:00
  cout << "UTC+7:00\n";
  cout << "  Krasnoyarsk\n";
  cout << "  Bangkok, Hanoi, Jakarta\n";
  cout << "  Barnaul, Gorno-Altaysk\n";

  // UTC+8:00
  cout << "UTC+8:00\n";
  cout << "  Ulaanbataar\n";
  cout << "  Taipei\n";
  cout << "  Perth\n";
  cout << "  Kuala Lumpur, Singapore\n";
  cout << "  Irkutsk\n";
  cout << "  Beijing, Chongqing, Hong Kong, Urumqi\n";
  cout << "  Manila, Philippines\n";

  // UTC+8:30
  cout << "UTC+8:30\n";
  cout << "  Pyongyang\n";

  // UTC+9:00
  cout << "UTC+9:00\n";
  cout << "  Yakutsk\n";
  cout << "  Seoul\n";
  cout << "  Osaka, Sapporo, Tokyo\n";
  cout << "  Chita\n";

  // UTC+9:30
  cout << "UTC+9:30\n";
  cout << "  Darwin\n";
  cout << "  Adelaide\n";

  // UTC+10:00
  cout << "UTC+10:00\n";
  cout << "  Vladivostok\n";
  cout << "  Magadan\n";
  cout << "  Hobart\n";
  cout << "  Guam, Port Moresby\n";
  cout << "  Canberra, Melbourne, Sydney\n";
  cout << "  Brisbane\n";

  // UTC+11:00
  cout << "UTC+11:00\n";
  cout << "  Solomon Is., New Caledonia\n";
  cout << "  Chokurdakh\n";
  cout << "  Sakhalin\n";

  // UTC+12:00
  cout << "UTC+12:00\n";
  cout << "  Fiji\n";
  cout << "  Auckland, Wellington\n";
  cout << "  Anadyr, Petropavlovsk-Kamchatsky\n";

  // UTC+13:00
  cout << "UTC+13:00\n";
  cout << "  Samoa\n";
  cout << "  Nuku'alofa\n";

  // UTC+14:00
  cout << "UTC+14:00\n";
  cout << "  Kiritimati Islad\n";

  cout << endl;

  cout << "Enter the Time in military format\n";
  int h;
  do
  {
    cout << "  Enter the hour(0-23): ";
    cin >> h;
  } while( h < 0 || h > 23 );

  int m;
  do
  {
    cout << "  Enter the minutes(0-59): ";
    cin >> m;
  } while( m < 0 || m > 59 );

  cout << "Enter the Date\n";
  int mo;
  do
  {
    cout << "  Enter the month(1-12): ";
    cin >> mo;
  } while( mo < 1 || mo > 12 );

  int da;
  do
  {
    cout << "  Enter the day(1-31): ";
    cin >> da;
  } while( da < 1 || da > 31 );

  cout << "  Enter the year: ";
  int y;
  cin >> y;

  string fromLocation;
  cout << "Enter the place to convert from(Use the locations above): ";
  cin.ignore();
  getline(cin, fromLocation);

  string toLocation;
  cout << "Enter the place to convert to(Use the locations above): ";
  getline(cin, toLocation);

  cout << "Enter the DST(Daylight Savings Time) Offset: \n";
  cout << "  Enter the hour: ";
  int hDST;
  cin >> hDST;
  int mDST;
  cout << "  Enter the minute: ";
  cin >> mDST;

  if( h == 0 )
    h = 24;

  Time fromTime(h, m);
  Date fromDate(mo, da, y);
  Time DST(hDST, mDST);
  TimeZoneConverter myTimeZoneConverter(fromTime, fromDate, fromLocation, toLocation, DST);
  cout << endl;
  cout << myTimeZoneConverter;
}
