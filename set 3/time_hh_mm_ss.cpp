#include<iostream>
using namespace std;

class time{
	public:
		int second;
	
	public:
		void readdata() {
			cout << "please Enter seconds : ";
			cin >> second;
		}
};

int main() {
	int hh, mm, ss, temp;
	
	time t;
	
	t.readdata();
	
	hh = t.second/3600;
	temp = t.second%3600;
	mm = temp/60;
	ss= temp%60;
	
	cout << "time is : " << hh << " : " << mm << " : " << ss;
	
	return 0;
}

