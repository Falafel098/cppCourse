#include <iostream>
#include <string>
using namespace std;

string getDayOfWeek (int dayNum) {
	string dayName;
	switch (dayNum) {
		case 0:
			dayName = "Sunday";
			break; 
		case 1:
			dayName = "Monday";
			break; 
		case 2:
			dayName = "Tuesday";
			break; 
		case 3:
			dayName = "Wendesday";
			break; 
		case 4:
			dayName = "Thursday";
			break; 
		case 5:
			dayName = "Friday";
			break; 
		case 6:
			dayName = "Saturday";
			break; 
		default: 
			dayName = "Invalid Day number"; 
			break;
	}
	return dayName;
}
int main()
{
	cout << getDayOfWeek (1) << endl;

	return 0;
}


