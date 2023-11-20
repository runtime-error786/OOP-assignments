#include<iostream>
using namespace std;

int strr(int y, char a[], char b[]) {
    int x = 0;
    for (int i = 0; i < y; i++)
    {
        if (a[i] != b[i])
        {
            x = 1;
            break;
        }
    }
    if (x == 0)
        cout << "Compared strings are equal.";
    else
        cout << "Strings are not equal.";
    return x;

}
int main()
{
    char str1[50], str2[50];
    int i, size;
    cout << "Enter string 1 : ";
    cin >> str1;
    cout << "Enter string 2 : ";
    cin >> str2;
    cout << "Enter number of characters to be compared : ";
    cin >> size;
    strr(size, str1, str2);
    return 0;
}
