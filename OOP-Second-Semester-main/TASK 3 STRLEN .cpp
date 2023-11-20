#include<iostream>
using namespace std;

int strr(string a) {
	int i = 0, count = 0;
	for (i = 0; a[i] != NULL; i++)
	{
		count++;
	}
	return count;
}
int main()
{
	string str;
	cout << "Enter Your String : ";
	cin >> str;

	cout << "Length Of Your String is : " << strr(str) << endl;
	return 0;
}
