#include<iostream>
using namespace std;

class read{
	public:
		int id;
		string name;
	
	public:
		void readdata() {
			cout << "Enter id :";
			cin >> id;
			
			cout << "Enter name :";
			cin >> name;
		}	
};

class print{
	public:
		void print2() {
			read r;
			
			r.readdata();
			
			cout << "id is :" << r.id << endl;
			cout << "name is :" << r.name << endl;
		}
};

int main() {
	print p;
	
	p.print2();
	
	return 0;
}
