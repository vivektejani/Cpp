#include<iostream>
using namespace std;

int main() {
	char ch;
	
	cout << "please Enter input : ";
	cin >> ch;
	
	if (ch >= '0' && ch <= '9') {
		cout << "numeric input";
	} else {
		cout << "not numeric input";
	}
	
	return 0;
}

