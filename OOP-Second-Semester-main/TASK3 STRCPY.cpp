#include <iostream>
using namespace std;

char* strr(char a[], char b[]) {
	int i;
	for ( i = 0; a[i] != NULL; i++) {
		b[i] = a[i];
	}
	b[i] = '\0';
	cout << "The 2nd string str2 iss : " << b;
	return b;
}
int main() {
	char str1[100];
	cout << "Enter The String : ";
	cin >> str1;
	char str2[100];
	strr(str1, str2);
	return 0;
}
