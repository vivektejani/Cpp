#include<iostream>
using namespace std;

int main() {
	int arr[50], n, i;
	
	cout << "Enter size of an array : ";
	cin >> n;
	
	cout << "Enter the elemnt of an array : " << endl;
	for (i=0; i<n; i++) {
		cin >> arr[i];
	}
	
	cout << "array Element is : ";
	for (i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
