#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int y = 0;
int y2 = 0;
void tabulardatamaxprice(double* p, int* p2, char** p3) {
	cout << p3[0] << "\t\t||\t" << p[0] << "\t\t||\t" << p2[0] << "\t\t||\t" << endl << endl;
}
void tabulardatamaxquantity(double* p, int* p2, char** p3) {
	cout << p3[0] << "\t\t||\t" << p[0] << "\t\t||\t" << p2[0] << "\t\t||\t" << endl << endl;
}
double* Maximumprice(double* p, int* p2, char** p3)
{
	int j = 0;
	double temp1 = 0, temp2 = 0;
	int temp3 = 0, temp4 = 0;
	for (int i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (p[i] < p[j])
			{
				temp1 = p[i];
				temp2 = p[j];
				p[i] = temp2;
				p[j] = temp1;
				temp3 = p2[i];
				temp4 = p2[j];
				p2[j] = temp3;
				p2[i] = temp4;
				swap(p3[i], p3[j]);
			}
		}
	}
	return p;
}
int* MaximumQuantity(double* p, int* p2, char** p3)
{
	int i = 0;
	int j = 0;
	double temp1 = 0;
	double temp2 = 0;
	int temp3 = 0;
	int temp4 = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (p2[i] < p2[j])
			{
				temp1 = p[i];
				temp2 = p[j];
				p[i] = temp2;
				p[j] = temp1;
				temp3 = p2[i];
				temp4 = p2[j];
				p2[j] = temp3;
				p2[i] = temp4;
				swap(p3[i], p3[j]);
			}
		}
	}
	return p2;
}
int main()
{
	double price[10];
	int qunatity[10];
	char* Name[10];
	int i = 0;
	int j = 0;
	double* p9 = 0;
	for (i = 0; i < 10; i++)
	{
		Name[i] = new char[20];
	}
	for (i = 0; i < 10; i++)
	{
		cout << i;
		cout << endl;
		cout << "Enter The Name Of The Item" << "  " << endl;
		cin >> Name[i];
		cout << endl;
		cout << "Enter The Price Of The Item" << "  " << endl;
		cin >> price[i];
		cout << endl;
		cout << "Enter The Total Quantity Of The Item" << "  " << endl;
		cin >> qunatity[i];
		cout << endl;
	}
	cout << endl;
	p9 = Maximumprice(price, qunatity, Name);
	cout << "The Product with the Max price is As Following" << " " << endl;
	cout << "The Name of the Product is" << " ";
	cout << Name[0] << endl;
	cout << "The Price Of The Item" << "  ";
	cout << price[0] << endl;
	cout << "The Total Quantity Of Item" << "  ";
	cout << qunatity[0] << endl;
	cout << endl;
	tabulardatamaxprice(price, qunatity, Name);
	
	int* o;
	o = MaximumQuantity(price, qunatity, Name);
	cout << endl;
	cout << "The Product with the Max Quantiy is As Following" << " " << endl;
	cout << "The Name of the Product is" << " ";
	cout << Name[0] << endl;
	cout << "The Price of The Item" << "  ";
	cout << price[0] << endl;
	cout << "The Total Quantity Of Item" << "  ";
	cout << qunatity[0] << endl;
	tabulardatamaxquantity(price, qunatity, Name);
}

