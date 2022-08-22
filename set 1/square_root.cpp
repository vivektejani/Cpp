#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int arr[50], n, i;
	
	cout << "please Enter size of an array : ";
	cin >> n;
	
	cout << "please element of array : ";
	for (i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << "square root is : ";
	for (i=0; i<n; i++) {
		cout << sqrt(arr[i]) << " ";
	}
	

	return 0;
}

