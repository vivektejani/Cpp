#include<iostream>
using namespace std;

class student{
	public:
		int id;
	
	private:
		int fees;
	
	public:	
		void readdata() {
			cout << "please Enter id : ";
			cin >> id;
			
			cout << "please Enter fees : ";
			cin >> fees;
		}	
		
		void print() {
			cout << "fees : " << fees << endl;
		}
};

int main() {
	student s1;
	
	s1.readdata();
	
	cout << "id : " << s1.id << endl;
	
	s1.print();
	
	return 0;
}

