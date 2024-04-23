#include <iostream>
using namespace std;
#include "Date.h";
#include "Period.h";

int main()
{
	Date date;
	cout << "IsLeapYear : " << date.IsLeapYear() << endl;
	cout << "DaysInYear : " << date.DaysInYear() << endl;
	cout << "HoursInYear : " << date.HoursInYear() << endl;
	cout << "MinsInYear : " << date.MinsInYear() << endl;
	cout << "SecsInYear : " << date.SecsInYear() << endl;
	cout << "DaysInMonth : " << date.DaysInMonth() << endl;
	cout << "HoursInMonth : " << date.HoursInMonth() << endl;
	cout << "MinsInMonth : " << date.MinsInMonth() << endl;
	cout << "SecsInMonth : " << date.SecsInMonth() << endl;

	cout << "\n";

	cout << "GetDateInString : " << date.GetDateInString() << endl;
	cout << "GetDayNameByOrder : " << date.GetDayNameByOrder() << endl;
	cout << "GetMonthNameByOrder : " << date.GetMonthNameByOrder() << endl;

	cout << "\n";

	cout << "PrintMonthCalendar : "; date.PrintMonthCalendar();
	cout << "PrintFullYearCalendar : "; date.PrintFullYearCalendar();

	cout << "\n";

	cout << "DayOrderFromDate : " << date.DayOrderFromDate() << endl;
	cout << "DateAfterDaysAdded : ";  date.PrintDate(date.DateAfterDaysAdded(100));
	cout << "IsLastDay : " << date.IsLastDay() << endl;
	cout << "IsLastMonth : " << date.IsLastMonth() << endl;
	cout << "GetSystemDate : ";  date.PrintDate(date.GetSystemDate());

	cout << "\n";

	cout << "CountAllDays : " << date.CountAllDays() << endl;
	cout << "CountAllHours : " << date.CountAllHours() << endl;
	cout << "CountAllMins : " << date.CountAllMins() << endl;
	cout << "CountAllSecs : " << date.CountAllSecs() << endl;

	cout << "\n";

	cout << "IncreaseDateByOneDay : ";  date.PrintDate(date.IncreaseDateByOneDay());
	cout << "IncreaseDateByOneWeek : ";  date.PrintDate(date.IncreaseDateByOneWeek());
	cout << "IncreaseDateByOneMonth : ";  date.PrintDate(date.IncreaseDateByOneMonth());
	cout << "IncreaseDateByOneYear : ";  date.PrintDate(date.IncreaseDateByOneYear());
	cout << "IncreaseDateByOneDecade : ";  date.PrintDate(date.IncreaseDateByOneDecade());
	cout << "IncreaseDateByOneCentury : ";  date.PrintDate(date.IncreaseDateByOneCentury());
	cout << "IncreaseDateByOneMillennium : ";  date.PrintDate(date.IncreaseDateByOneMillennium());

	cout << "\n";

	cout << "IncreaseDateByXDays(10) : ";  date.PrintDate(date.IncreaseDateByXDays(10));
	cout << "IncreaseDateByXWeeks(10) : ";  date.PrintDate(date.IncreaseDateByXWeeks(10));
	cout << "IncreaseDateByXMonths(10) : ";  date.PrintDate(date.IncreaseDateByXMonths(10));
	cout << "IncreaseDateByXYears(10) : ";  date.PrintDate(date.IncreaseDateByXYears(10));
	cout << "IncreaseDateByXYearsFaster(10) : ";  date.PrintDate(date.IncreaseDateByXYearsFaster(10));
	cout << "IncreaseDateByXDecades(10) : ";  date.PrintDate(date.IncreaseDateByXDecades(10));
	cout << "IncreaseDateByXDecadesFaster(10) : ";  date.PrintDate(date.IncreaseDateByXDecadesFaster(10));

	cout << "\n";

	cout << "DecreaseDateByOneDay : ";  date.PrintDate(date.DecreaseDateByOneDay());
	cout << "DecreaseDateByOneWeek : ";  date.PrintDate(date.DecreaseDateByOneWeek());
	cout << "DecreaseDateByOneMonth : ";  date.PrintDate(date.DecreaseDateByOneMonth());
	cout << "DecreaseDateByOneYear : ";  date.PrintDate(date.DecreaseDateByOneYear());
	cout << "DecreaseDateByOneDecade : ";  date.PrintDate(date.DecreaseDateByOneDecade());
	cout << "DecreaseDateByOneCentury : ";  date.PrintDate(date.DecreaseDateByOneCentury());
	cout << "DecreaseDateByOneMillennium : ";  date.PrintDate(date.DecreaseDateByOneMillennium());

	cout << "\n";

	cout << "DecreaseDateByXDays(10) : ";  date.PrintDate(date.DecreaseDateByXDays(10));
	cout << "DecreaseDateByXWeeks(10) : ";  date.PrintDate(date.DecreaseDateByXWeeks(10));
	cout << "DecreaseDateByXMonths(10) : ";  date.PrintDate(date.DecreaseDateByXMonths(10));
	cout << "DecreaseDateByXYears(10) : ";  date.PrintDate(date.DecreaseDateByXYears(10));
	cout << "DecreaseDateByXYearsFaster(10) : ";  date.PrintDate(date.DecreaseDateByXYearsFaster(10));
	cout << "DecreaseDateByXDecades(10) : ";  date.PrintDate(date.DecreaseDateByXDecades(10));
	cout << "DecreaseDateByXDecadesFaster(10) : ";  date.PrintDate(date.DecreaseDateByXDecadesFaster(10));

	cout << "\n";

	cout << "DayOrderInWeek : " << date.DayOrderInWeek() << endl;
	cout << "IsEndOfWeek : " << date.IsEndOfWeek() << endl;
	cout << "IsWeekend : " << date.IsWeekend() << endl;
	cout << "IsBusinessDay : " << date.IsBusinessDay() << endl;
	cout << "DaysUntilEndOfWeek : " << date.DaysUntilEndOfWeek() << endl;
	cout << "DaysUntilEndOfMonth : " << date.DaysUntilEndOfMonth() << endl;
	cout << "DaysUntilEndOfYear : " << date.DaysUntilEndOfYear() << endl;
	cout << "IsDateValid : " << date.IsDateValid() << endl;
	cout << "FormatDate('mm | dd | yyyy') : " << date.FormatDate("mm | dd | yyyy") << endl;

	cout << "\n";

	cout << "ActualVacationDays(Date(7,4,2024), Date(22, 4, 2024)) : " << Date::ActualVacationDays(Date(7, 4, 2024), Date(22, 4, 2024)) << endl;
	cout << "IsDate1AfterDate2(Date(7,4,2024), Date(22, 4, 2024)) : " << Date::IsDate1AfterDate2(Date(7, 4, 2024), Date(22, 4, 2024)) << endl;
	cout << "IsDate1BeforeDate2(Date(7,4,2024), Date(22, 4, 2024)) : " << Date::IsDate1BeforeDate2(Date(7, 4, 2024), Date(22, 4, 2024)) << endl;
	cout << "IsDatesEquals(Date(7,4,2024), Date(22, 4, 2024)) : " << Date::IsDatesEquals(Date(7, 4, 2024), Date(22, 4, 2024)) << endl;
	cout << "DateFromDayOrder(300,2000) : ";
	Date::PrintDate(Date::DateFromDayOrder(300, 2000));

	cout << "\n";

	Date date1(1, 4, 2024), date2(7, 4, 2024);

	cout << "SwapTwoDates(date1, date2) : " << endl;
	cout << "\tBefore : Date 1 = ";
	date1.PrintDate();
	cout << "\tBefore : Date 2 = ";
	date2.PrintDate();
	Date::SwapTwoDates(date1, date2);
	cout << "\tAfter : Date 1 = ";
	date1.PrintDate();
	cout << "\tAfter : Date 2 = ";
	date2.PrintDate();

	cout << "\n";


	cout << "DateDifference(Date(7,4,2024), Date(22, 4, 2024)) : " << Date::DateDifference(Date(7, 4, 2024), Date(22, 4, 2024)) << endl;

	cout << "\n\nPeriods : \n\n";

	Period per1(Date(1, 1, 2000), Date(1, 2, 2000));
	Period per2(Date(15, 1, 2000), Date(1, 3, 2000));

	cout << "Period 1" << endl;
	per1.PrintPeriod();
	cout << "Period 2" << endl;
	per2.PrintPeriod();

	cout << '\n';

	cout << "IsPeriodsOverlapped : " << per1.IsOverlapped(per2) << endl;
	cout << "PeriodLengthInDays (Period 1) : " << per1.LengthInDays() << endl;
	cout << "PeriodLengthInDays (Period 2) : " << per2.LengthInDays() << endl;
	cout << "CountOverlap : " << per1.CountOverlap(per2) << endl;
	cout << "IsDateWithinPeriod(31/7/2001, Period 1) : " << per1.IsDateWithinPeriod(date) << endl;

	cout << '\n';



}