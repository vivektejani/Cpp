#include<iostream>
using namespace std;

class time{
	public:
		int h, m, s;
	
	public:
		void readdata() {
			cout << "please Enter hours : ";
			cin >> h;
			
			cout << "please Enter miniuts : ";
			cin >> m;
			
			cout << "please Enter seconds : ";
			cin >> s;
		}	
};

int main() {
	int th, tm, ts;
	
	time t1, t2;
	
	t1.readdata();
	t2.readdata();
	
	ts = t1.s + t2.s;
	tm = t1.m + t2.m + (ts/60);
	th = t1.h + t2.h + (tm/60);
	
	ts = ts % 60;
	tm = tm % 60;
	
	cout << th << " : " << tm << " : " << ts;
	
	
	
	return 0;
}

