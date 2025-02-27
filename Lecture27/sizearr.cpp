#include <iostream>
using namespace std;

int main() {
    
    int arr[5] = {11,21,31,20,19};
    int *p = 0;
    p = arr;
    cout << sizeof(arr) << endl;
    cout << sizeof(p) << endl;

    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << 3[p] << endl;
    return 0;
} 