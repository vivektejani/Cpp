#include<iostream>
using namespace std;

class Message{
	private:
		string name;
		
	public:
		Message(string n) {
			name = n;
		}	
		
		void print() {
			cout << "Name : " << name << endl;
		}
		
		void print(string c) {
			cout << "Name : " << name << endl;
			cout << "City : " << c << endl; 
		}
};

int main() {
	Message m("Amit");
	
	m.print();
	m.print("surat");
	
	return 0;
}
