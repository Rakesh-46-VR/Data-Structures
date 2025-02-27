#include <iostream>
using namespace std;

int main() {
    int p = 5;
    int * ptr1 = &p;
    int ** ptr2 = &ptr1;

    cout << sizeof(p) << endl;
    cout << sizeof(ptr1) << endl;
    cout << sizeof(ptr2) << endl;

    cout << p << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;

    // change p using p
    p++;

    cout << p << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;

    // change p using ptr1
    (*ptr1)++;

    cout << p << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;

    // change p using ptr2
    (**ptr2)++;

    cout << p << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl;
 

    return 0;
}