#include<iostream>
using namespace std;
int Frequency(int* p, int size)
{
	int i, j, y = 0, counter = 0;
	int* p1 = new int[size];
	int* num = new int[size];
	int k = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (p[i] == p[j])
			{
				counter++;
				y = p[i];
			}
		}
		num[k] = y;
		p1[k] = counter;
		counter = 0;
		k++;
	}
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (p1[i] < p1[j])
			{
				temp1 = p[i];
				temp2 = p[j];
				p[j] = temp1;
				p[i] = temp2;
				temp3 = num[i];
				temp4 = num[j];
				num[i] = temp4;
				num[j] = temp3;
			}
		}
	}
	int n = 0;
	n = num[0];
	return n;
}
int main()
{
	int size, i = 0;
	cout << "Enter The Array  Size : ";
	cin >> size;
	int* p = new int[size];
	cout << "Please input the array elements";
	cout << endl;
	for (i = 0; i < size; i++)
	{
		cin >> p[i];
	}
	cout << endl;
	cout << "Number with the highest frequency is : ";
	cout << Frequency(p, size) << endl;
	system("pause");
	return 0;
}
