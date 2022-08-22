#include<iostream>
using namespace std;

class rail{
	public:
		int train_num, time, station_num;
		string name;
	
	public:
		void setdata() {
			cout << endl;
			cout << "Enter your train_num : ";
			cin >> train_num;
			
			cout << "Enter your time : ";
			cin >> time;
				
			cout << "Enter your name : ";
			cin >> name;	
		}
		
		void getdata() {
			cout << "train_num : " << train_num << endl;
			cout << "time : " << time << endl;
			cout << "name : " << name << endl;
		}
};

int main() {
	int i, n, tn;
	rail r[50];
	
	cout << "please Enter number which you want Enter data : ";
	cin >> n;
	
	if (n >= 3) {
		for (i=0; i<n; i++) {
			r[i].setdata();
		}
		
		cout << endl << endl;
		cout << "please Enter train_num : ";
		cin >> tn;
		
		cout << endl;
		for (i=0; i<n; i++) {
			if (tn == r[i].train_num) {
				r[i].getdata();
			} 	
		}
	} else {
		cout << "    !!! please Enter 3 or abow number !!! ";
	}
	
	
	return 0;
}
