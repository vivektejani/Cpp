#include<iostream>
using namespace std;

class Train{
	public:
		int no;
		string name, source, dest, time;
		
	public:
		void setdata() {
			cout << "please Enter no : ";
			cin >> no;
			
			cout << "please Enter name : ";
			cin >> name;
			
			cout << "please Enter source : ";
			cin >> source;
			
			cout << "please Enter dest : ";
			cin >> dest;
			
			cout << "please Enter time : ";
			cin >> time;
		}
		
		void getdata() {
			cout << "no : " << no << endl;
			cout << "name : " << name << endl;
			cout << "source : " << source << endl;
			cout << "dest : " << dest << endl;
			cout << "time : " << time << endl;
		}
};

int main() {
	int n, i, t_no;
	
	cout << "How Many Train Records Need To Be Insert ? ";
	cin >> n;
	
	if (n == 3) {
		Train t[n];
		
		for (i=0; i<n; i++) {
			t[i].setdata();
		}
		
		cout << endl << "Which Train Record Required : ";
		cin >> t_no;
		
		for (i=0; i<n; i++) {
			if (t[i].no == t_no) {
				t[i].getdata();
			}
		}
	} else {
		cout << "Minimum Three Records Requier";
	}
	
	return 0;
}
