#include<iostream>
using namespace std;

int main() {
	int year;
	
	cout << "please Enter year : ";
	cin >> year;
	
	if (year >= 2000 && year <= 3000) {
		if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
			cout << year << " is leap year ";
		} else {
			cout << year << " is not leap yrear !";
		}
	} else {
		cout << "year not a range bitween 2000 to 3000";
	}
	
	return 0;
}

