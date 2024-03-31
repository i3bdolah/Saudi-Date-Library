#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Date
{
private:
	int _year;
	int _month;
	int _day;

	int EnterString(string msg) {
		int temp;
		cout << msg;
		cin >> temp;
		return temp;
	}
	int EnterInt(string msg) {
		int temp;
		cout << msg;
		cin >> temp;
		return temp;
	}
	Date FillDateInfo() {
		Date date;
		date.day = EnterInt("Day: ");
		date.month = EnterInt("Month: ");
		date.year = EnterInt("Year: ");
		return date;
	}

	static vector <string> splitToVector(string sentence, string seperator) {
		vector <string> wordsSeperated;
		int pos = 0;
		string strTemp;

		while ((pos = sentence.find(seperator)) != string::npos)
		{
			strTemp = sentence.substr(0, pos);
			if (strTemp != seperator)
			{
				wordsSeperated.push_back(strTemp.substr(0, (pos)));
			}

			sentence.erase(0, pos + seperator.length());
		}

		if (sentence != "" && sentence != seperator)
		{
			wordsSeperated.push_back(sentence);
		}

		return wordsSeperated;
	}

	static string ReplaceWordInString(string StringToReplace, string RepalceTo, string FullString) {
		short pos = FullString.find(StringToReplace);

		while (pos != std::string::npos) {
			FullString = FullString.replace(pos, StringToReplace.length(), RepalceTo);
			pos = FullString.find(StringToReplace);
		}
		return FullString;
	}

public:
	Date() {

	}
	Date(string stringDate) {

	}
	Date(int day, int month, int year) {
		_day = day;
		_month = month;
		_year = year;
	}
	Date(int dayOrderInYear, int year) {

	}

	void Year(int num) {
		_year = num;
	}

	void Month(int num) {
		_month = num;
	}

	void Day(int num) {
		_day = num;
	}

	int GetYear() {
		return _year;
	}

	int GetMonth() {
		return _month;
	}

	int GetDay() {
		return _day;
	}

	__declspec(property(get = GetYear, put = Year)) int year;
	__declspec(property(get = GetMonth, put = Month)) int month;
	__declspec(property(get = GetDay, put = Day)) int day;


	// ______________________________


	static bool IsLeapYear(int num) {
		return ((num % 400) == 0) || ((num % 4) == 0 && (num % 100) != 0);
	}

	static int DaysInYear(int year) {
		return IsLeapYear(year) ? 366 : 365;
	}

	static int HoursInYear(int year) {
		return DaysInYear(year) * 24;
	}

	static int MinsInYear(int year) {
		return HoursInYear(year) * 60;
	}

	static int SecsInYear(int year) {
		return MinsInYear(year) * 60;
	}

	static int DaysInMonth(int enteredMonth, int enteredYear) {
		int NumberOfDaysInAllMonths[12] = { 31, (IsLeapYear(enteredYear) ? 29 : 28), 31, 30, 31, 30, 31 ,31, 30, 31, 30, 31 };
		return NumberOfDaysInAllMonths[enteredMonth - 1];
	}

	static int HoursInMonth(int enteredMonth, int enteredYear) {
		return DaysInMonth(enteredMonth, enteredYear) * 24;
	}

	static int MinsInMonth(int enteredMonth, int enteredYear) {
		return HoursInMonth(enteredMonth, enteredYear) * 60;
	}

	static int SecsInMonth(int enteredMonth, int enteredYear) {
		return MinsInMonth(enteredMonth, enteredYear) * 60;
	}

	static string GetDateInString(int day, int month, int year) {
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}

	static int GetDayOrder(int day, int month, int year) {
		int a = (14 - month) / 12;
		int y = year - a;
		int m = month + (12 * a) - 2;

		int d = (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

		return d;
	}

	static string GetDayNameByOrder(int dayOrder) {
		string DaysByIndex[7] = {
			"Sunday",
			"Monday",
			"Tuesday",
			"Wednesday",
			"Thursday",
			"Friday",
			"Saturday" };

		return DaysByIndex[dayOrder];
	}

	static void PrintDateDetails(int day, int month, int year) {
		cout << setw(15) << right << "Date : ";
		cout << GetDateInString(day, month, year) << endl;

		cout << setw(15) << right << "Day Order : ";
		cout << GetDayOrder(day, month, year) << endl;

		cout << setw(15) << right << "Day Name : ";
		cout << GetDayNameByOrder(GetDayOrder(day, month, year)) << endl;
	}

	static string GetMonthNameByOrder(int monthOrder) {
		string MonthsByIndex[12] = {
			"Jan", "Feb", "Mar", "Apr", "May", "Jun",
			"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
		return MonthsByIndex[monthOrder - 1];
	}

	static void PrintMonthCalendar(int month, int year) {
		int NumberOfDaysInMonth = DaysInMonth(month, year);
		int DayOrder = GetDayOrder(1, month, year);

		printf("\n  _______________%s_______________\n\n", GetMonthNameByOrder(month).c_str());

		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		int i;
		for (i = 0; i < DayOrder; i++)
			printf("     ");

		for (int j = 1; j <= NumberOfDaysInMonth; j++)
		{
			printf("%5d", j);

			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}

		printf("\n  _________________________________\n");
	}

	static void PrintFullYearCalendar(int year) {
		printf("\n  ________________________________\n\n");
		printf("\n	_________Calendar Year__________\n\n");
		printf("\n  ________________________________\n\n");

		for (int month = 1; month <= 12; month++)
		{
			PrintMonthCalendar(month, year);
		}
	}

	static int DaysFromBeginningOfYear(int day, int month, int year) {
		int TotalNumberOfDays = 0;
		for (int currMonth = 1; currMonth < month; currMonth++)
		{
			TotalNumberOfDays += DaysInMonth(currMonth, year);
		}
		TotalNumberOfDays += day;

		return TotalNumberOfDays;
	}

	static Date DateFromTotalOfBeginning(int TotalNumberOfDays, int year) {
		Date date;
		int remainingDays = TotalNumberOfDays;
		date.year = year;

		while (true)
		{
			int currMonthDays = DaysInMonth(date.month, date.year);

			if (remainingDays > currMonthDays) {
				remainingDays -= currMonthDays;
				date.month++;
			}
			else {
				date.day = remainingDays;
				break;
			}
		}

		return date;
	}

	static Date DateAfterDaysAdded(Date date, int daysAdded) {
		while (true)
		{
			int currMonthDays = DaysInMonth(date.month, date.year);

			if ((daysAdded + date.day) > currMonthDays)
			{
				date.month++;
				if (date.month > 12) {
					date.month = 1;
					date.year++;
				}
				daysAdded -= currMonthDays;
			}
			else
			{
				date.day += daysAdded;
				break;
			}
		}
		return date;
	}

	static bool IsDate1BeforeDate2(Date date1, Date date2) {
		if (date1.year < date2.year) {
			return true;
		}
		else if (date1.year == date2.year) {
			if (date1.month < date2.month)
				return true;
			else if (date1.day < date2.day)
				return true;
		}
		return false;
	}

	static bool IsDatesEquals(Date date1, Date date2) {
		return (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day);
	}

	static bool IsLastDay(Date date) {
		return (date.day == DaysInMonth(date.month, date.year));
	}

	static bool IsLastMonth(int month) {
		return (month == 12);
	}

	static Date IncreaseDateByOneDay(Date date) {
		if (IsLastDay(date)) {
			date.day = 1;

			if (IsLastMonth(date.month)) {
				date.month = 1;
				date.year++;
			}
			else {
				date.month++;
			}
		}
		else
		{
			date.day++;
		}

		return date;
	}

	Date IncreaseDateByOneDay() {
		return IncreaseDateByOneDay(*this);
	}

	static int DateDifference(Date date1, Date date2, bool IncludeEndDay = false) {
		int diff = 0;
		int swapFlag = 1;

		if (!IsDate1BeforeDate2(date1, date2))
		{
			swapFlag = -1;
			SwapTwoDates(date1, date2);
		}

		while (IsDate1BeforeDate2(date1, date2))
		{
			date1 = IncreaseDateByOneDay(date1);
			diff++;
		}

		return (IncludeEndDay ? ++diff : diff) * swapFlag;
	}

	static Date GetSystemDate() {
		Date date;

		time_t t = time(0);
		tm* now = localtime(&t);

		date.year = now->tm_year + 1900;
		date.month = now->tm_mon + 1;
		date.day = now->tm_mday;

		return date;
	}

	static int AgeInDays(Date dateAge) {
		Date DateCurrent = GetSystemDate();
		return DateDifference(dateAge, DateCurrent);
	}

	static void SwapTwoDates(Date& date1, Date& date2) {
		Date DateTemp;

		DateTemp.day = date1.day;
		DateTemp.month = date1.month;
		DateTemp.year = date1.year;

		date1.day = date2.day;
		date1.month = date2.month;
		date1.year = date2.year;

		date2.day = DateTemp.day;
		date2.month = DateTemp.month;
		date2.year = DateTemp.year;
	}

	static void IncreaseDateByXDays(Date date, int num) {
		while (num != 0)
		{
			IncreaseDateByOneDay(date);
			num--;
		}
	}

	void IncreaseDateByXDays(int num) {
		IncreaseDateByXDays(*this, num);
	}

	static void IncreaseDateByOneWeek(Date date) {
		IncreaseDateByXDays(date, 7);
	}

	void IncreaseDateByOneWeek() {
		IncreaseDateByOneWeek(*this);
	}

	static void IncreaseDateByXWeeks(Date date, int num) {
		while (num != 0)
		{
			IncreaseDateByOneWeek(date);
			num--;
		}
	}

	void IncreaseDateByXWeeks(int num) {
		IncreaseDateByXWeeks(*this, num);
	}

	static void IncreaseDateByOneMonth(Date date) {
		IncreaseDateByXDays(date, DaysInMonth(date.month, date.year));
	}

	void IncreaseDateByOneMonth() {
		IncreaseDateByOneMonth(*this);
	}

	static void IncreaseDateByXMonths(Date date, int num) {
		while (num != 0)
		{
			IncreaseDateByOneMonth(date);
			num--;
		}
	}

	void IncreaseDateByXMonths(int num) {
		IncreaseDateByXMonths(*this, num);
	}

	static void IncreaseDateByOneYear(Date date) {
		IncreaseDateByXMonths(date, 12);
	}

	void IncreaseDateByOneYear() {
		IncreaseDateByOneYear(*this);
	}

	static void IncreaseDateByXYears(Date date, int num) {
		while (num != 0)
		{
			IncreaseDateByOneYear(date);
			num--;
		}
	}

	void IncreaseDateByXYears(int num) {
		IncreaseDateByXYears(*this, num);
	}

	static void IncreaseDateByXYearsFaster(Date date, int num) {
		date.year += num;
	}

	void IncreaseDateByXYearsFaster(int num) {
		IncreaseDateByXYearsFaster(*this, num);
	}

	static void IncreaseDateByOneDecade(Date date) {
		IncreaseDateByXYears(date, 10);
	}

	void IncreaseDateByOneDecade() {
		IncreaseDateByOneDecade(*this);
	}

	static void IncreaseDateByXDecades(Date date, int num) {
		while (num != 0)
		{
			IncreaseDateByOneDecade(date);
			num--;
		}
	}

	void IncreaseDateByXDecades(int num) {
		IncreaseDateByXDecades(*this, num);
	}

	static void IncreaseDateByXDecadesFaster(Date date, int num) {
		date.year += (num * 10);
	}

	void IncreaseDateByXDecadesFaster(int num) {
		IncreaseDateByXDecadesFaster(*this, num);
	}

	static void IncreaseDateByOneCentury(Date date) {
		IncreaseDateByXDecades(date, 10);
	}

	void IncreaseDateByOneCentury() {
		IncreaseDateByOneCentury(*this);
	}

	static void IncreaseDateByOneMillennium(Date date) {
		date.year += 1000;
	}

	void IncreaseDateByOneMillennium() {
		IncreaseDateByOneMillennium(*this);
	}

	static void PrintDate(Date date) {
		cout << date.day << "/" << date.month << "/" << date.year << endl;
	}

	void PrintDate() {
		PrintDate(*this);
	}

	static Date DecreaseDateByOneDay(Date date) {
		if (date.day == 1) {
			date.day = DaysInMonth(date.month, date.year);

			if (date.month == 1) {
				date.month = 12;
				date.year--;
			}
			else {
				date.month--;
			}
		}
		else
		{
			date.day--;
		}
	}

	Date DecreaseDateByOneDay() {
		return DecreaseDateByOneDay(*this);
	}

	static void DecreaseDateByXDays(Date date, int num) {
		while (num != 0)
		{
			DecreaseDateByOneDay(date);
			num--;
		}
	}

	void DecreaseDateByXDays(int num) {
		return DecreaseDateByXDays(*this, num);
	}

	static void DecreaseDateByOneWeek(Date date) {
		DecreaseDateByXDays(date, 7);
	}

	void DecreaseDateByOneWeek() {
		return DecreaseDateByOneWeek(*this);
	}

	static void DecreaseDateByXWeeks(Date date, int num) {
		while (num != 0)
		{
			DecreaseDateByOneWeek(date);
			num--;
		}
	}

	void DecreaseDateByXWeeks(int num) {
		return DecreaseDateByXWeeks(*this, num);
	}

	static void DecreaseDateByOneMonth(Date date) {
		DecreaseDateByXDays(date, DaysInMonth(date.month, date.year));
	}

	void DecreaseDateByOneMonth() {
		return DecreaseDateByOneMonth(*this);
	}

	static void DecreaseDateByXMonths(Date date, int num) {
		while (num != 0)
		{
			DecreaseDateByOneMonth(date);
			num--;
		}
	}

	void DecreaseDateByXMonths(int num) {
		return DecreaseDateByXMonths(*this, num);
	}

	static void DecreaseDateByOneYear(Date date) {
		DecreaseDateByXMonths(date, 12);
	}

	void DecreaseDateByOneYear() {
		return DecreaseDateByOneYear(*this);
	}

	static void DecreaseDateByXYears(Date date, int num) {
		while (num != 0)
		{
			DecreaseDateByOneYear(date);
			num--;
		}
	}

	void DecreaseDateByXYears(int num) {
		return DecreaseDateByXYears(*this, num);
	}

	static void DecreaseDateByXYearsFaster(Date date, int num) {
		date.year -= num;
	}

	void DecreaseDateByXYearsFaster(int num) {
		return DecreaseDateByXYearsFaster(*this, num);
	}

	static void DecreaseDateByOneDecade(Date date) {
		DecreaseDateByXYears(date, 10);
	}

	void DecreaseDateByOneDecade() {
		return DecreaseDateByOneDecade(*this);
	}

	static void DecreaseDateByXDecades(Date date, int num) {
		while (num != 0)
		{
			DecreaseDateByOneDecade(date);
			num--;
		}
	}

	void DecreaseDateByXDecades(int num) {
		return DecreaseDateByXDecades(*this, num);
	}

	static void DecreaseDateByXDecadesFaster(Date date, int num) {
		date.year -= (num * 10);
	}

	void DecreaseDateByXDecadesFaster(int num) {
		return DecreaseDateByXDecadesFaster(*this, num);
	}

	static void DecreaseDateByOneCentury(Date date) {
		DecreaseDateByXDecades(date, 10);
	}

	void DecreaseDateByOneCentury() {
		return DecreaseDateByOneCentury(*this);
	}

	static void DecreaseDateByOneMillennium(Date date) {
		date.year -= 1000;
	}

	void DecreaseDateByOneMillennium() {
		return DecreaseDateByOneMillennium(*this);
	}

	static int GetDayOrder(Date date) {
		int a = (14 - date.month) / 12;
		int y = date.year - a;
		int m = date.month + (12 * a) - 2;

		int d = (date.day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

		return d;
	}

	int GetDayOrder() {
		return GetDayOrder(*this);
	}

	static bool isEndOfWeek(int dayOrder) {
		return (dayOrder == 6);
	}

	static bool IsWeekend(int dayOrder) {
		return (dayOrder == 5 || dayOrder == 6);
	}

	static bool IsBusinessDay(int dayOrder) {
		return !IsWeekend(dayOrder);
	}

	static int DaysUntilEndOfWeek(int dayOrder) {
		return (7 - (dayOrder + 1));
	}

	static int DaysUntilEndOfMonth(Date date) {
		return DaysInMonth(date.month, date.year) - date.day;
	}

	int DaysUntilEndOfMonth() {
		return DaysUntilEndOfMonth(*this);
	}

	static int DaysUntilEndOfYear(Date date) {
		int sum = DaysUntilEndOfMonth(date);
		date.month++;

		while (date.month <= 12)
		{
			sum += DaysInMonth(date.month, date.year);
			date.month++;
		}
		return sum;
	}

	int DaysUntilEndOfYear() {
		return DaysUntilEndOfYear(*this);
	}

	static int ActualVacationDays(Date start, Date end) {
		int BusinessDaysSum = 0;
		while (!IsDatesEquals(start, end))
		{
			if (IsBusinessDay(GetDayOrder(start)))	BusinessDaysSum++;
			start = IncreaseDateByOneDay(start);
		}
		return BusinessDaysSum;
	}

	static Date ReturnDate(Date start, short vacationDays) {
		short WeekendCounter = 0;

		for (short i = 1; i <= vacationDays + WeekendCounter; i++)
		{
			if (IsWeekend(GetDayOrder(start))) WeekendCounter++;
			start = IncreaseDateByOneDay(start);
		}

		while (IsWeekend(GetDayOrder(start))) start = IncreaseDateByOneDay(start);

		return start;
	}

	Date ReturnDate(short vacationDays) {
		return ReturnDate(*this, vacationDays);
	}

	static bool IsDate1AfterDate2(Date date1, Date date2) {
		return !IsDate1BeforeDate2(date1, date2) && !IsDatesEquals(date1, date2);
	}

	static short CompareDates(Date date1, Date date2) {
		if (IsDate1BeforeDate2(date1, date2)) return -1;
		if (IsDatesEquals(date1, date2)) return 0;
		return 1;
	}

	static bool IsDateValid(Date date) {
		return !((date.day < 1 || date.day > DaysInMonth(date.year, date.month)) || (date.month < 1 || date.month > 12) || (date.year < 1));
	}

	bool IsDateValid() {
		return IsDateValid(*this);
	}

	static Date StringToDate(string date_str) {
		Date date;
		vector <string> dateSeperated = splitToVector(date_str, "/");

		date.day = stoi(dateSeperated.at(0));
		date.month = stoi(dateSeperated.at(1));
		date.year = stoi(dateSeperated.at(2));

		return date;
	}

	static string FormatDate(Date date, string format = "dd/mm/yyyy") {
		string temp;

		temp = ReplaceWordInString("dd", to_string(date.day), format);
		temp = ReplaceWordInString("mm", to_string(date.month), temp);
		temp = ReplaceWordInString("yyyy", to_string(date.year), temp);

		return temp;
	}

};