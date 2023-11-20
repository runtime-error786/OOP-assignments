#include<iostream>
using namespace std;

int strr(char a[], char b[]) {
    int i = 0, c = 0;
    while (a[i] != NULL || b[i] != NULL)
    {
        if (a[i] != b[i])
        {
            c = 1;
            break;
        }
        i++;
    }
    if (c == 0)
        cout << "\nStrings are Equal";
    else
        cout << "\nStrings are not Equal";
    cout << endl;
    return c;
}

int main()
{
    char str1[50], str2[50];
    cout << "Enter the First String: ";
    cin >> str1;
    cout << "Enter the Second String: ";
    cin >> str2;
    strr(str1, str2);
    return 0;
}
