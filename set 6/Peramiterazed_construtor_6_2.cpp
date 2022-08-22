#include<iostream>
using namespace std;

class Demo{
	public:
		int w, l;
	
	public:
		Demo(int w, int l) {
			this->w = w;
			this->l = l;
		}	
		
		void area() {
			cout << "Atra is : " << w*l << endl;
		}
};

int main() {
	Demo d1(10,20);
	Demo d2(5,3);
	
	d1.area();
	d2.area();
	
	return 0;
}

