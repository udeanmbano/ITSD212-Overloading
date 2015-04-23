#include <iostream>
#include <string>
#include <iomanip>
#include "dateType.h"
#include "personalInfo.h"
using namespace std;

int main()
{
	//declare class object personal info
	personalInfo person;
	//(string first, string last, int month,
	//int day, int year, int ID)
	
	person.setpersonalInfo("Udean","Mbano",4,8,1990,1);
	//Displaying the person details
	cout << " Displaying the peson details" << endl;
	person.printpersonalInfo();
	cout << endl;
	return 0;
}