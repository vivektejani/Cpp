#include<iostream>
using namespace std;

class employee{
	public:
		int id, salary, experiance;
		string name, role, address, email, contact;
	
	public:
		void setter() {
			cout << endl;
			cout << "please Enter id : ";
			cin >> id;
			
			cout << "please Enter salary : ";
			cin >> salary;
			
			cout << "please Enter experiance : ";
			cin >> experiance;
			
			cout << "please Enter name : ";
			cin >> name;
			
			cout << "please Enter role : ";
			cin >> role;
			
			cout << "please Enter address : ";
			cin >> address;
			
			cout << "please Enter email : ";
			cin >> email;
			
			cout << "please Enter contact : ";
			cin >> contact;
			cout << endl;
		}
		
		void gettre() {
			cout << "id is : " << id << endl;
			cout << "salary is : " << salary << endl;
			cout << "experiance is : " << experiance << endl;
			cout << "name is : " << name << endl;
			cout << "role is : " << role << endl;
			cout << "address is : " << address << endl;
			cout << "email is : " << email << endl;
			cout << "contact is : " << contact << endl;
		}
			
};

int main() {
	employee e1, e2, e3, e4, e5;
	
	e1.setter();
	e1.gettre();
	
	e2.setter();
	e2.gettre();
	
	e3.setter();
	e3.gettre();
	
	e4.setter();
	e4.gettre();
	
	e5.setter();
	e5.gettre();
	
	return 0;
}
