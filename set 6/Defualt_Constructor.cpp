#include<iostream>
using namespace std;

class Demo{
	public:
		int d;
	
	public:
		Demo() {
			cout << "Constructor is Called" << endl;
			d=5;
		}	
		
		void print() {
			cout << d;
		}
};

int main() {
	Demo d;
	d.print();
	
	return 0;
}


