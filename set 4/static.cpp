#include<iostream>
using namespace std;

class demo{
	public:
		static int counter;
	public:
		demo() {
			counter++;
		}	 
};

int demo::counter ; 

int main() {
	demo d1;
	demo d2;
	
	cout << demo::counter;
	
	return 0;
}
