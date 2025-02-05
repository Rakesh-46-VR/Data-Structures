#include <iostream>
using namespace std;

int main() {
    int a = 8;
    int * ptr = &a;

    cout << "Value of a is : " << a << endl;
    cout << "Address of a is : " << &a << endl;
    cout << "Address stored in prt is : " << ptr << endl;
    cout << "Value pointed by prt is : " << *ptr << endl;
    cout << "Size of the pointer is : " << sizeof(ptr) << endl;

    int *notnull = NULL;

    cout << *notnull << endl;

    return 0;
}