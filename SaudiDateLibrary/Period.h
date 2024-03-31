#pragma once
#pragma warning(disable : 4996)
#include "Date.h"
using namespace std;

struct stPeriod
{
	Date start;
	Date end;
};

class Period : public Date
{
private:
	stPeriod _Per1;
	stPeriod _Per2;

public:
	Period(Date _Period1Start, Date _Period1End, Date _Period2Start, Date _Period2End) {
		_Per1.start = _Period1Start;
		_Per1.end = _Period1End;
		_Per2.start = _Period2Start;
		_Per2.end = _Period2End;
	}

	void SetPer1_start(Date date) {
		_Per1.start = date;
	}
	void SetPer1_end(Date date) {
		_Per1.end = date;
	}
	void SetPer2_start(Date date) {
		_Per2.start = date;
	}
	void SetPer2_end(Date date) {
		_Per2.end = date;
	}

	Date GetPer1_start() {
		return _Per1.start;
	}
	Date GetPer1_end() {
		return _Per1.end;
	}
	Date GetPer2_start() {
		return _Per2.start;
	}
	Date GetPer2_end() {
		return _Per2.end;
	}



	bool IsPeriodsOverlapped(stPeriod per1, stPeriod per2) {
		return !(IsDate1AfterDate2(per2.start, per1.end) || IsDate1BeforeDate2(per2.end, per1.start));
	}

	int PeriodLengthInDays(stPeriod per, bool IncludeEndDay = false) {
		return DateDifference(per.start, per.end, IncludeEndDay);
	}

	bool IsDateWithinPeriod(Date date, stPeriod per) {
		return !(IsDate1BeforeDate2(date, per.start) || IsDate1AfterDate2(date, per.end));
	}

	int CountOverlapPeriods(stPeriod per1, stPeriod per2) {
		int OverlappedDays = 0;
		int per1Length = PeriodLengthInDays(per1);
		int per2Length = PeriodLengthInDays(per2);

		if (!IsPeriodsOverlapped(per1, per2)) return 0; // Catch The 0 Case.

		if (per1Length < per2Length)
		{
			while (!IsDatesEquals(per1.start, per1.end))
			{
				if (IsDateWithinPeriod(per1.start, per2)) {
					OverlappedDays += 1;
				}
				per1.start = IncreaseDateByOneDay(per1.start);
			}
		}
		else
		{
			while (!IsDatesEquals(per2.start, per2.end))
			{
				if (IsDateWithinPeriod(per2.start, per1)) {
					OverlappedDays += 1;
				}
				per2.start = IncreaseDateByOneDay(per2.start);
			}
		}
		return OverlappedDays;
	}
};

