#include<iostream>
using namespace std;

inline void multtable(int num) {
	int i;
	
	for (i=1; i<=10; i++) {
		cout << num << " x " << i << " = " << num*i << endl;
	}
}

int main() {
	int num; 
	
	cout << "Enter the number : ";
	cin >> num;
	
	multtable(num);
	
	return 0;
}
