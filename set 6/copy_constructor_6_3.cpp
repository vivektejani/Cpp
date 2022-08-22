#include<iostream>
using namespace std;

class Demo{
	public:
		int age;
	
	public:
		Demo(int a) {
			age = a;
		}	
		
		Demo(Demo &d) {
			cout << "Age is : " << d.age;
		}
};

int main() {
	Demo d1(20);
	Demo d2(d1);
	
	return 0;
}

