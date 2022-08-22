#include<iostream>
using namespace std;

class Demo{
	public:
		Demo() {
			cout << "Constructor is Called " << endl;
		}	
		
		void print() {
			cout << "Print mathod " << endl;
		}
		
		~Demo() {
			cout << "Destructor is called";
		}
};

int main() {
	Demo d;
	d.print();
	
	return 0;
}

