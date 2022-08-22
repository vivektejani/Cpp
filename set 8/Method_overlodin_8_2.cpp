#include<iostream>
using namespace std;

class Demo{
	public:
		void print() {
			cout << "Welcome" << endl;
		}
		
		void print(string name) {
			cout << "Name     : " << name << endl;
		}
		
		void print(string city, int age) {
			cout << "City     : " << city << endl;
			cout << "Age      : " << age << endl;
		}
		
		void print(string email, string cont, string add) {
			cout << "Email    : " << email << endl;
			cout << "Contect  : " << cont << endl;
			cout << "Address  : " << add << endl;
		}
};

int main() {
	Demo d;
	
	d.print();
	d.print("Amit");
	d.print("Surat", 50);
	d.print("abc@gmail.com", "6655443322", "Mota varachha");
	
	return 0;
}
