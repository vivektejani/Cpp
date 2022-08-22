#include<iostream>
using namespace std;

int main() {
	char str[50];
	int i;

	cout << "Enter the string : ";
	gets(str);
	
	i=0; 
	
	while(str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		} else {
			str[i] = str[i];
		}
		i++;
	}
	
	puts(str);
	
	return 0;
}

