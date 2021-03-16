
#include <iostream>
using namespace std;

int main()
{
	int newMonth;

	cout << "\n \t Enter the number of a month between 1 and 12: \t";
	cin >> newMonth;

	switch (newMonth) {
	case 1:
		cout << "\n \t The first month is January and there are 31 days. ";
		break;
	case 2:
		cout << "\n \t The second month is February and there are 28 days if not leap else 29 days. ";
		break;
	case 3:
		cout << "\n \t The third month is March and there are 31 days. ";
		break;
	case 4:
		cout << "\n \t The fourth month is April and there are 30 days. ";
		break;
	case 5:
		cout << "\n \t The fifth month is May and there are 31 days. ";
		break;
	case 6:
		cout << "\n \t The sixth month is June and there are 30 days. ";
		break;
	case 7:
		cout << "\n \t The seventh month is July and there are 31 days. ";
		break;
	case 8:
		cout << "\n \t The eigth month is August and there are 31 days. ";
		break;
	case 9:
		cout << "\n \t The ninth month is September and there are 30 days. ";
		break;
	case 10:
		cout << "\n \t The tenth month is October and there are 31 days. ";
		break;
	case 11:
		cout << "\n \t The eleventh month is November and there are 30 days. ";
		break;
	case 12:
		cout << "\n \t The twelfth month is December and there are 31 days. ";
		break;
	default:
		cout << "\n \t Please enter a number between 1 and 12";
		break;
	
	
	}
	



}

