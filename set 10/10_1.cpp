#include<iostream>
using namespace std;

class car{
	public:
		handleexception() {
			cout << "exception occured. ";
		}
};

class motor{
	public:
		void generateexception() {
			throw 0;
		}
};

class garage:public car,public motor {
	public:
		garage() {
			try{
				generateexception();
			}catch(...) {
				handleexception();
			}
		}
};

int main() {
	garage g;
	
	return 0;
	
}

