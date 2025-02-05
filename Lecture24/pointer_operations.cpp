#include <iostream>
using namespace std;

int main() {
    
    int i = 5;

    int *p = &i;

    cout << i << endl;
    cout << *p << endl;

    (*p)++;

    cout << i << endl;
    cout << *p << endl;

    // copying the pointer 
    int * q = p;
    cout << *q << endl;

    return 0;
}