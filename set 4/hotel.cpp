#include<iostream>
using namespace std;

class hotel{
	public:
		int id, staff_size, room_size, establish_year;
		string name, type, address, reting_type, website;
		
	public:
		void stadata(int id, int staff_size, int room_size, int establish_year, string name, string type, string address, string reting_type, string website) {
			this->id = id;
			this->staff_size = staff_size; 
			this->room_size = room_size;
			this->establish_year = establish_year;
			this->name = name;
			this->type = type;
			this->address = address;
			this->reting_type = reting_type;
			this->website = website;
		}	
		
		void getdata() {
			cout << endl;
			cout << "id is : " << this->id << endl;
			cout << "staff_size is : " << this->staff_size << endl;
			cout << "room_size is : " << this->room_size << endl;
			cout << "establish_year is : " << this->establish_year << endl;
			cout << "name is : " << this->name << endl;
			cout << "type is : " << this->type << endl;
			cout << "address is : " << this->address << endl;
			cout << "reting_type is : " << this->reting_type << endl;
			cout << "website is : " << this->website << endl;
		}
};

int main() {
	int id, staff_size, room_size, establish_year;
	string name, type, address, reting_type, website;
	hotel h;
	
	cout << "please Enter id : ";
	cin >> id; 
	
	cout << "please Enter staff_size : ";
	cin >> staff_size;
	
	cout << "please Enter room_size : ";
	cin >> room_size;
	
	cout << "please Enter establish_year : ";
	cin >> establish_year;
	
	cout << "please Enter name : ";
	cin >> name;
	
	cout << "please Enter type : ";
	cin >> type;
	
	cout << "please Enter address : ";
	cin >> address;
	
	cout << "please Enter reting_type : ";
	cin >> reting_type;
	
	cout << "please Enter website : ";
	cin >> website;
	
	h.stadata(id, staff_size, room_size, establish_year, name, type, address, reting_type, website);
	h.getdata();
	
	return 0;
}
