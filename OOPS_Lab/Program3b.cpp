#include<iostream>
using namespace std;

int main(){
	int dayNumber;
	cout << "Enter The Day Number (1-7) : ";
	cin >> dayNumber;
	switch(dayNumber){
		case 1 : cout << "Day is MONDAY";
			break;
		case 2 : cout << "Day is TUESDAY";
			break;
		case 3 : cout << "Day is WEDNESDAY";
			break;
		case 4 : cout << "Day is THURSDAY";
			break;
		case 5 : cout << "Day is FRIDAY";
			break;
		case 6 : cout << "Day is SATURDAY";
			break;
		case 7 : cout << "Day is SUNDAY";
			break;
		default : cout << "Invalid Choice";
			break;
	}
}
