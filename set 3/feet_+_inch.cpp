#include<iostream>
using namespace std;

class diatance{
	public: 
		int feet1, feet2, inch1, inch2, totalfeet, totalinch;
		
	public:
		void readdata1() {
			cout << "please Enter feet1 : ";
			cin >> feet1;
			cout << "please Enter inch1 : ";
			cin >> inch1;
		}
		
		void readdata2() {
			cout << "please Enter feet2 : ";
			cin >> feet2;
			cout << "please Enter inch2 : ";
			cin >> inch2;
		}
		
		void adddistance() {
			totalfeet = feet1 + feet2;
			totalinch = inch1 + inch2;
			
			while (totalinch >= 12) {
				totalinch = totalinch - 12;
				totalfeet++;
			}
			
			cout << "total distance is : " << totalfeet << " " << totalinch;
		} 
};

int main() {
	diatance d;
	
	d.readdata1();
	d.readdata2();
	d.adddistance();
	
	return 0;
}

