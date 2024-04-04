# Saudi Date Library 📅
The Saudi Date Project is a C++ project aimed at providing functionalities related to date manipulation and calculation. It includes classes for handling individual dates (Date) as well as periods of time (Period). The project offers a wide range of features such as determining leap years, calculating the number of days, hours, minutes, and seconds in a given date or year, converting dates to strings, retrieving the day and month names, printing calendars, and performing various date arithmetic operations.

## Importance for the User
For users (developers), this project offers a comprehensive toolkit for dealing with date-related tasks in C++ programming. By utilizing the provided classes and functions, developers can streamline date calculations, manage date-based data, and implement date-related functionalities more efficiently. This project can significantly reduce the development time and effort required for handling dates, ensuring accuracy and consistency in date-related operations.

## Why This Project (Reinvents The Wheel)
The Saudi Date Library project, although focusing solely on date manipulation without time considerations, embodies a developer-centered design approach. While existing solutions for date handling are available, reimagining the wheel is indispensable for fostering learning and innovation within the developer community.

This project's developer-centered design approach ensures that the library's functionalities cater precisely to developers' needs. By crafting custom functions tailored to date operations, developers can seamlessly integrate the library into their projects, enhancing productivity and reducing development time. Moreover, the library's intuitive design fosters a deeper understanding of fundamental programming concepts, empowering developers to tackle complex date-related challenges with confidence.

Through intelligent design choices and problem-solving methodologies, the Saudi Date Library offers developers a versatile toolkit for effective date manipulation. By reinventing the wheel in this context, developers gain valuable insights into algorithmic thinking and software engineering principles, driving continuous improvement and innovation within the development ecosystem.
  

## Installation (Running the Project)

### Windows


1. Clone the repository to your local machine.
2. Navigate to the project directory.
3. Compile the source files using a C++ compiler.
4. Run the compiled executable file.

### macOS / Linux

1. Clone the repository to your local machine.
2. Open the terminal and navigate to the project directory.
3. Compile the source files using a C++ compiler.
4. Run the compiled executable file.

## Usage
The provided code demonstrates the usage of a custom C++ library for managing dates and periods. By including the "Date.h" and "Period.h" header files, the main function showcases various functionalities of the Date and Period classes.

In this example, the code initializes a Date object with a specific date and displays information such as leap year status, days, hours, minutes, and seconds in the year and month. It also illustrates operations like printing the date in different formats, generating calendars, and manipulating dates by incrementing and decrementing them.

Furthermore, the code introduces Period objects representing time spans between dates and demonstrates operations such as calculating period lengths, checking for overlaps, and counting overlapping days.

The Input : 31/7/2001

![image](https://github.com/i3bdolah/Saudi-Date-Library/assets/80276711/d086d819-0e72-48ea-a25b-7a2da06402e2)
![image](https://github.com/i3bdolah/Saudi-Date-Library/assets/80276711/60ea8976-802e-45c4-81b3-7a8814a106a5)
![image](https://github.com/i3bdolah/Saudi-Date-Library/assets/80276711/090a2288-e6ee-4991-a4cd-b87b05490df3)
![image](https://github.com/i3bdolah/Saudi-Date-Library/assets/80276711/89898719-96af-4054-a39b-bda25c7fefc7)
![image](https://github.com/i3bdolah/Saudi-Date-Library/assets/80276711/c5dc03e0-e3ee-4d64-9129-a898f0870ae7)

## Function Reference Table

| Class | Function | Parameter Type | Return Type | Description |
| --- | --- | --- | --- | --- |
| `Date` | `IsLeapYear(int year)` | `int` | `bool` | Determines if the given year is a leap year. |
| `Date` | `IsLeapYear()` | None | `bool` | Determines if the year of the current date object is a leap year. |
| `Date` | `DaysInYear(int year)` | `int` | `int` | Calculates the number of days in the given year. |
| `Date` | `DaysInYear()` | None | `int` | Calculates the number of days in the year of the current date object. |
| `Date` | `HoursInYear(int year)` | `int` | `int` | Calculates the number of hours in the given year. |
| `Date` | `HoursInYear()` | None | `int` | Calculates the number of hours in the year of the current date object. |
| `Date` | `MinsInYear(int year)` | `int` | `int` | Calculates the number of minutes in the given year. |
| `Date` | `MinsInYear()` | None | `int` | Calculates the number of minutes in the year of the current date object. |
| `Date` | `SecsInYear(int year)` | `int` | `int` | Calculates the number of seconds in the given year. |
| `Date` | `SecsInYear()` | None | `int` | Calculates the number of seconds in the year of the current date object. |
| `Date` | `DaysInMonth(int month, int year)` | `int, int` | `int` | Calculates the number of days in the given month and year. |
| `Date` | `DaysInMonth()` | None | `int` | Calculates the number of days in the month of the current date object. |
| `Date` | `HoursInMonth(int month, int year)` | `int, int` | `int` | Calculates the number of hours in the given month and year. |
| `Date` | `HoursInMonth()` | None | `int` | Calculates the number of hours in the month of the current date object. |
| `Date` | `MinsInMonth(int month, int year)` | `int, int` | `int` | Calculates the number of minutes in the given month and year. |
| `Date` | `MinsInMonth()` | None | `int` | Calculates the number of minutes in the month of the current date object. |
| `Date` | `SecsInMonth(int month, int year)` | `int, int` | `int` | Calculates the number of seconds in the given month and year. |
| `Date` | `SecsInMonth()` | None | `int` | Calculates the number of seconds in the month of the current date object. |
| `Date` | `GetDateInString(int day, int month, int year)` | `int, int, int` | `string` | Formats the given date into a string. |
| `Date` | `GetDateInString()` | None | `string` | Formats the date of the current date object into a string. |
| `Date` | `GetDayNameByOrder(int dayOrder)` | `int` | `string` | Retrieves the day name based on its order in the week. |
| `Date` | `GetDayNameByOrder()` | None | `string` | Retrieves the day name of the current date object based on its order in the week. |
| `Date` | `GetMonthNameByOrder(int month)` | `int` | `string` | Retrieves the month name based on its order in the year. |
| `Date` | `GetMonthNameByOrder()` | None | `string` | Retrieves the month name of the current date object based on its order in the year. |
| `Date` | `PrintMonthCalendar(int month, int year)` | `int, int` | `void` | Prints the calendar for the given month and year. |
| `Date` | `PrintMonthCalendar()` | None | `void` | Prints the calendar for the month and year of the current date object. |
| `Date` | `PrintFullYearCalendar(int year)` | `int` | `void` | Prints the calendar for the entire year. |
| `Date` | `PrintFullYearCalendar()` | None | `void` | Prints the calendar for the entire year of the current date object. |
| `Date` | `DayOrderFromDate(int day, int month, int year)` | `int, int, int` | `int` | Calculates the day order from the given date. |
| `Date` | `DayOrderFromDate()` | None | `int` | Calculates the day order from the date of the current date object. |
| `Date` | `DateFromDayOrder(int TotalNumberOfDays, int year)` | `int, int` | `Date` | Derives the date from the total number of days and the year. |
| `Date` | `DateAfterDaysAdded(Date date, int daysAdded)` | `Date, int` | `Date` | Calculates the date after adding a specified number of days to the given date. |
| `Date` | `DateAfterDaysAdded(int daysAdded)` | `int` | `Date` | Calculates the date after adding a specified number of days to the current date object. |
| `Date` | `IsDate1BeforeDate2(Date date1, Date date2)` | `Date, Date` | `bool` | Checks if date1 is before date2. |
| `Date` | `IsDatesEquals(Date date1, Date date2)` | `Date, Date` | `bool` | Checks if date1 equals date2. |
| `Date` | `IsLastDay(Date date)` | `Date` | `bool` | Determines if the given date is the last day of the month. |
| `Date` | `IsLastDay()` | None | `bool` | Determines if the date of the current date object is the last day of the month. |
| `Date` | `IsLastMonth(int month)` | `int` | `bool` | Determines if the given month is the last month of the year. |
| `Date` | `IsLastMonth()` | None | `bool` | Determines if the month of the current date object is the last month of the year. |
| `Date` | `DateDifference(Date date1, Date date2, bool IncludeEndDay = false)` | `Date, Date, bool` | `int` | Calculates the difference in days between two dates. |
| `Date` | `GetSystemDate()` | None | `Date` | Retrieves the current system date. |
| `Date` | `CountAllDays(Date dateAge)` | `Date` | `int` | Counts all days between the given date and the current system date. |
| `Date` | `CountAllDays()` | None | `int` | Counts all days between the date of the current date object and the current system date. |
| `Date` | `CountAllHours(Date date)` | `Date` | `int` | Counts all hours between the given date and the current system date. |
| `Date` | `CountAllHours()` | None | `int` | Counts all hours between the date of the current date object and the current system date. |
| `Date` | `CountAllMins(Date date)` | `Date` | `int` | Counts all minutes between the given date and the current system date. |
| `Date` | `CountAllMins()` | None | `int` | Counts all minutes between the date of the current date object and the current system date. |
| `Date` | `CountAllSecs(Date date)` | `Date` | `int` | Counts all seconds between the given date and the current system date. |
| `Date` | `CountAllSecs()` | None | `int` | Counts all seconds between the date of the current date object and the current system date. |
| `Date` | `SwapTwoDates(Date& date1, Date& date2)` | `Date&, Date&` | `void` | Swaps two date objects. |
| `Date` | `IncreaseDateByOneDay(Date date)` | `Date` | `Date` | Increases the given date by one day. |
| `Date` | `IncreaseDateByOneDay()` | None | `Date` | Increases the date of the current date object by one day. |
| `Date` | `IncreaseDateByXDays(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of days. |
| `Date` | `IncreaseDateByXDays(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of days. |
| `Date` | `IncreaseDateByOneWeek(Date date)` | `Date` | `Date` | Increases the given date by one week. |
| `Date` | `IncreaseDateByOneWeek()` | None | `Date` | Increases the date of the current date object by one week. |
| `Date` | `IncreaseDateByXWeeks(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of weeks. |
| `Date` | `IncreaseDateByXWeeks(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of weeks. |
| `Date` | `IncreaseDateByOneMonth(Date date)` | `Date` | `Date` | Increases the given date by one month. |
| `Date` | `IncreaseDateByOneMonth()` | None | `Date` | Increases the date of the current date object by one month. |
| `Date` | `IncreaseDateByXMonths(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of months. |
| `Date` | `IncreaseDateByXMonths(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of months. |
| `Date` | `IncreaseDateByOneYear(Date date)` | `Date` | `Date` | Increases the given date by one year. |
| `Date` | `IncreaseDateByOneYear()` | None | `Date` | Increases the date of the current date object by one year. |
| `Date` | `IncreaseDateByXYears(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of years. |
| `Date` | `IncreaseDateByXYears(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of years. |
| `Date` | `IncreaseDateByXYearsFaster(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of years more efficiently. |
| `Date` | `IncreaseDateByXYearsFaster(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of years more efficiently. |
| `Date` | `IncreaseDateByOneDecade(Date date)` | `Date` | `Date` | Increases the given date by one decade. |
| `Date` | `IncreaseDateByOneDecade()` | None | `Date` | Increases the date of the current date object by one decade. |
| `Date` | `IncreaseDateByXDecades(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of decades. |
| `Date` | `IncreaseDateByXDecades(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of decades. |
| `Date` | `IncreaseDateByXDecadesFaster(Date date, int num)` | `Date, int` | `Date` | Increases the given date by a specified number of decades more efficiently. |
| `Date` | `IncreaseDateByXDecadesFaster(int num)` | `int` | `Date` | Increases the date of the current date object by a specified number of decades more efficiently. |
| `Date` | `IncreaseDateByOneCentury(Date date)` | `Date` | `Date` | Increases the given date by one century. |
| `Date` | `IncreaseDateByOneCentury()` | None | `Date` | Increases the date of the current date object by one century. |
| `Date` | `IncreaseDateByOneMillennium(Date date)` | `Date` | `Date` | Increases the given date by one millennium. |
| `Date` | `IncreaseDateByOneMillennium()` | None | `Date` | Increases the date of the current date object by one millennium. |
| `Date` | `PrintDate(Date date)` | `Date` | `void` | Prints the given date to the console. |
| `Date` | `PrintDate()` | None | `void` | Prints the date of the current date object to the console. |
| `Date` | `DecreaseDateByOneDay(Date date)` | `Date` | `Date` | Decreases the given date by one day. |
| `Date` | `DecreaseDateByOneDay()` | None | `Date` | Decreases the date of the current date object by one day. |
| `Date` | `DecreaseDateByXDays(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of days. |
| `Date` | `DecreaseDateByXDays(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of days. |
| `Date` | `DecreaseDateByOneWeek(Date date)` | `Date` | `Date` | Decreases the given date by one week. |
| `Date` | `DecreaseDateByOneWeek()` | None | `Date` | Decreases the date of the current date object by one week. |
| `Date` | `DecreaseDateByXWeeks(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of weeks. |
| `Date` | `DecreaseDateByXWeeks(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of weeks. |
| `Date` | `DecreaseDateByOneMonth(Date date)` | `Date` | `Date` | Decreases the given date by one month. |
| `Date` | `DecreaseDateByOneMonth()` | None | `Date` | Decreases the date of the current date object by one month. |
| `Date` | `DecreaseDateByXMonths(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of months. |
| `Date` | `DecreaseDateByXMonths(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of months. |
| `Date` | `DecreaseDateByOneYear(Date date)` | `Date` | `Date` | Decreases the given date by one year. |
| `Date` | `DecreaseDateByOneYear()` | None | `Date` | Decreases the date of the current date object by one year. |
| `Date` | `DecreaseDateByXYears(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of years. |
| `Date` | `DecreaseDateByXYears(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of years. |
| `Date` | `DecreaseDateByXYearsFaster(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of years more efficiently. |
| `Date` | `DecreaseDateByXYearsFaster(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of years more efficiently. |
| `Date` | `DecreaseDateByOneDecade(Date date)` | `Date` | `Date` | Decreases the given date by one decade. |
| `Date` | `DecreaseDateByOneDecade()` | None | `Date` | Decreases the date of the current date object by one decade. |
| `Date` | `DecreaseDateByXDecades(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of decades. |
| `Date` | `DecreaseDateByXDecades(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of decades. |
| `Date` | `DecreaseDateByXDecadesFaster(Date date, int num)` | `Date, int` | `Date` | Decreases the given date by a specified number of decades more efficiently. |
| `Date` | `DecreaseDateByXDecadesFaster(int num)` | `int` | `Date` | Decreases the date of the current date object by a specified number of decades more efficiently. |
| `Date` | `DecreaseDateByOneCentury(Date date)` | `Date` | `Date` | Decreases the given date by one century. |
| `Date` | `DecreaseDateByOneCentury()` | None | `Date` | Decreases the date of the current date object by one century. |
| `Date` | `DecreaseDateByOneMillennium(Date date)` | `Date` | `Date` | Decreases the given date by one millennium. |
| `Date` | `DecreaseDateByOneMillennium()` | None | `Date` | Decreases the date of the current date object by one millennium. |
| `Date` | `DayOrderInWeek(int day, int month, int year)` | `int, int, int` | `int` | Returns the day order in a week for a given date. |
| `Date` | `DayOrderInWeek(Date date)` | `Date` | `int` | Returns the day order in a week for the date of the current date object. |
| `Date` | `DayOrderInWeek()` | None | `int` | Returns the day order in a week for the date of the current date object. |
| `Date` | `IsEndOfWeek(int dayOrder)` | `int` | `bool` | Checks if a given day order corresponds to the end of the week. |
| `Date` | `IsEndOfWeek()` | None | `bool` | Checks if the day order of the current date object corresponds to the end of the week. |
| `Date` | `IsWeekend(int dayOrder)` | `int` | `bool` | Checks if a given day order corresponds to a weekend day. |
| `Date` | `IsWeekend()` | None | `bool` | Checks if the day order of the current date object corresponds to a weekend day. |
| `Date` | `IsBusinessDay(int dayOrder)` | `int` | `bool` | Checks if a given day order corresponds to a business day. |
| `Date` | `IsBusinessDay()` | None | `bool` | Checks if the day order of the current date object corresponds to a business day. |
| `Date` | `DaysUntilEndOfWeek(int dayOrder)` | `int` | `int` | Calculates the number of days until the end of the week for a given day order. |
| `Date` | `DaysUntilEndOfWeek()` | None | `int` | Calculates the number of days until the end of the week for the day order of the current date object. |
| `Date` | `DaysUntilEndOfMonth(Date date)` | `Date` | `int` | Calculates the number of days until the end of the month for a given date. |
| `Date` | `DaysUntilEndOfMonth()` | None | `int` | Calculates the number of days until the end of the month for the date of the current date object. |
| `Date` | `DaysUntilEndOfYear(Date date)` | `Date` | `int` | Calculates the number of days until the end of the year for a given date. |
| `Date` | `DaysUntilEndOfYear()` | None | `int` | Calculates the number of days until the end of the year for the date of the current date object. |
| `Date` | `ActualVacationDays(Date start, Date end)` | `Date, Date` | `int` | Calculates the number of actual vacation days between two dates. |
| `Date` | `ReturnDate(Date start, short vacationDays)` | `Date, short` | `Date` | Returns the end date of a vacation period starting from a specified date with the given number of vacation days. |
| `Date` | `ReturnDate(short vacationDays)` | `short` | `Date` | Returns the end date of a vacation period starting from the date of the current date object with the given number of vacation days. |
| `Date` | `IsDate1AfterDate2(Date date1, Date date2)` | `Date, Date` | `bool` | Checks if the first date is after the second date. |
| `Date` | `CompareDates(Date date1, Date date2)` | `Date, Date` | `short` | Compares two dates and returns -1 if the first date is before the second, 0 if they are equal, and 1 if the first date is after the second. |
| `Date` | `IsDateValid(Date date)` | `Date` | `bool` | Checks if a given date is a valid date. |
| `Date` | `IsDateValid()` | None | `bool` | Checks if the date of the current date object is a valid date. |
| `Date` | `StringToDate(string date_str)` | `string` | `Date` | Converts a date string in "dd/mm/yyyy" format to a date object. |
| `Date` | `FormatDate(Date date, string format = "dd/mm/yyyy")` | `Date, string` | `string` | Formats a date object according to the specified format. |
| `Date` | `FormatDate(string format = "dd/mm/yyyy")` | `string` | `string` | Formats the date of the current date object according to the specified format. |
| `Period` | `IsPeriodsOverlapped(Period per1, Period per2)` | `Period, Period` | `bool` | Determines whether two periods overlap by comparing their start and end dates. |
| `Period` | `IsPeriodsOverlapped()` | None | `bool` | Overloaded function that checks if the periods stored in the current object overlap. |
| `Period` | `PeriodLengthInDays(Period per, bool IncludeEndDay = false)` | `Period, bool` | `int` | Calculates the length of a period in days, optionally including the end day. |
| `Period` | `IsDateWithinPeriod(Date date, stPeriod per)` | `Date, stPeriod` | `bool` | Checks if a given date falls within a specified period. |
| `Period` | `CountOverlap(Period per1, Period per2)` | `Period, Period` | `int` | Counts the number of overlapping days between two periods. |
| `Period` | `CountOverlap()` | None | `int` | Overloaded function that counts the number of overlapping days between the periods stored in the current object. |



## Conclusion

The Saudi Date Project provides a robust solution for date manipulation and calculation tasks in C++ programming. With its extensive set of functions and classes, developers can easily incorporate date-related functionalities into their projects, enhancing productivity and ensuring accurate date handling. Whether it's determining leap years, printing calendars, or performing date arithmetic, this project offers a versatile toolkit for all date-related needs.
