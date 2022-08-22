#include<iostream>
using namespace std;

int main() {
	int arr[50], n, i, cube[50];
	
	cout << "please Enter size of an array : ";
	cin >> n;
	
	cout << "please element of array : ";
	for (i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	for (i=0; i<n; i++) {
		cube[i] = arr[i] * arr[i] * arr[i];
	}
	
	cout << "cube is : ";
	for (i=0; i<n; i++) {
		cout << cube[i] << " ";
	}
	
	return 0;
}

