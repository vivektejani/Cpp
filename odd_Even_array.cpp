#include<iostream>
using namespace std;

int main() {
	int arr[50], n, i, even[50] = {0}, odd[50] = {0};
	
	cout << "please Enter size of an array : ";
	cin >> n;
	
	cout << "please element of array : ";
	for (i=0; i<n; i++) {
		cin >> arr[i];
	}

	for (i=0; i<n; i++) {
		if (arr[i] % 2 != 0) {
			odd[i] = arr[i]; 
		} else {
			even[i] = arr[i];
		}
	}
	
	cout << "Even elements : " ;
	for (i=0; i<n; i++) {
		if (even[i] != 0) {
			cout << even[i] << " ";
		}
	}
	
	cout << endl << "odd elements : ";
	for (i=0; i<n; i++) {
		if (odd[i] != 0) {
			cout << odd[i] << " ";
		}
	}
	
	return 0;
}
