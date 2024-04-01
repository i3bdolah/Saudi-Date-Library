#include <iostream>
using namespace std;
#include "Date.h";
#include "Period.h";

int main()
{
	Date MyBirthdate(362, 2000);
	
	MyBirthdate.PrintDate();

	//MyBirthdate.IncreaseDateByOneDay();
	//MyBirthdate.DecreaseDateByXDays(100);

	//MyBirthdate.PrintDate();
	//cout << "MyBirthdate.AgeInDays() : " << MyBirthdate.AgeInDays() << endl;

}