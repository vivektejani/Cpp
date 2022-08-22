#include<iostream>
using namespace std;

class Shape{
	public:
		void area(int w, int l) {
			cout << "Area From Base Class : " << w*l << endl;
		}	
};

class Rectangle : public Shape{
	public:
		void area(int w, int l) {
			cout << "Area From Derrived Class : " << w*l << endl;
		}	
};

int main() {
	Rectangle r;
	
	r.area(100, 200);
	
	Shape s;
	s.area(10, 20);

	return 0;	
}
