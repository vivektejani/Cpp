#include<iostream>
using namespace std;

class Demo{
	public:
		int d, a1;
	
	public:
		Demo() {
			d=5;
		}	
		
		void print() {
			cout << "Defult Constructor : " << d << endl;
		}
		
		Demo(int a) {
			this->a1 = a;
		}
		
		void print2() {
			cout << "Peramiterized Constructor : " << a1 << endl;
		}
		
		Demo(Demo &d) {
			cout << "Copy Constructor : " << d.a1 << endl;
		}

		
};

int main() {
	Demo d;
	Demo d2(20);
	
	d.print();
	d2.print2();
	
	Demo d3(d2);
	
	return 0;
}

