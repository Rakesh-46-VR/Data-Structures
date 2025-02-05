#include <iostream>
using namespace std;

int main() {
    
    int temp[5] = {41,56,37,45,25};
    int * ptr = temp;

    cout << "Size of temp : " << sizeof(temp) << endl;
    cout << "Size of ptr : " << sizeof(ptr) << endl;
    cout << "Size of address of temp : " << sizeof(&temp) << endl;
    cout << "Size of address of ptr : " << sizeof(&ptr) << endl;
    cout << "Size of first element of temp : " << sizeof(*temp) << endl;
    cout << "Size of first element of ptr : " << sizeof(*ptr) << endl;
    cout << "Length of array : " << sizeof(temp) / sizeof(*temp) << endl;
    
    ptr = ptr + 1;
    cout << *ptr << endl;
    
    return 0;
}