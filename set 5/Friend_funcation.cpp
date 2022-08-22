#include<iostream>
using namespace std;

class Add2;
class Add1{
	private:
		int x;
		
	public:
		void setdata() {
			cout << "please Enter value for x : ";
			cin >> x;	
		}

		friend void adition(Add1 a1, Add2 a2);
};

class Add2{
	private:
		int y;
		
	public:
		void setdata() {
			cout << "please Enter value for y : ";
			cin >> y;	
		}
		
		friend void adition(Add1 a1, Add2 a2);
};

void adition(Add1 a1, Add2 a2) {
	cout << "Adition is : " << a1.x+a2.y << endl;
}

int main() {
	Add1 a1;
	Add2 a2;
	
	a1.setdata();
	a2.setdata();
	
	adition(a1, a2);
	
	return 0;
}
