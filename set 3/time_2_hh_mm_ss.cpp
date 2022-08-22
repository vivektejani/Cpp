#include<iostream>
using namespace std;

class time{
	public:
		int s, m=0, h=0;
	
	public:
		void read() {
			cout << "Enter the seconds : ";
			cin >> s;
		}	
		
		void minitus() {
			while (s >= 60) {
				s = s - 60;
				m++;
			}
		}
		
		void hours() {
			while (m >= 60) {
				m = m - 60;
				h++;
			}
			
			cout << "time is : " << h << " : " << m << " : " << s;
		}
};

int main() {
	time t;
	
	t.read();
	t.minitus();
	t.hours();
	
	return 0;
}
