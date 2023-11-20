#include <iostream>
using namespace std;
int main() {
    int array[50], i, sum = 0, size;
    int* ptr;
    cout << "Enter The Size Of Array : ";
    cin >> size;
    cout << "Enter The Elements Of The Array : " << endl;
    for (i = 0; i < size; i++) {
        cin >> array[i];
    }
    ptr = array;
    for (i = 0; i < size; i++) {
        sum = sum + *(ptr + i);
    }
    cout << endl;
    cout << "The Sum Of Array Elements :" << sum;
    return 0;
}
