#include<iostream>
using namespace std;

int main() {
	char ch;
	
	cout << "Enter any character : ";
	cin >> ch;
	
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		cout << ch << " is vowels";
	} else {
		cout << ch << " is consonant";
	}
	
	return 0;
}

