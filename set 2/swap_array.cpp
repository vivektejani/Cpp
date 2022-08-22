#include<iostream> 
using namespace std;

void swap(int *arr1, int *arr2, int n) {
	int i, temp;
	
	for (i=0; i<n; i++) {
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main() {
	int arr1[50], arr2[50], n, i;
	
	cout << "Enter size of array : "; 
	cin >> n;
	
	cout << "please element of first array : ";
	for (i=0; i<n; i++) {
		cin >> arr1[i];
	}
	
	cout << "please element of second array : ";
	for (i=0; i<n; i++) {
		cin >> arr2[i];
	}
	
	swap(arr1, arr2, n);
	
	cout << "first array : ";
	for (i=0; i<n; i++) {
		cout << arr1[i] << " ";
	}
	
	cout << endl << "second array : ";
	for (i=0; i<n; i++) {
		cout << arr2[i] << " ";
	}
	
	
	return 0;
}
