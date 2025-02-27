#include <iostream>
using namespace std;

int main() {
    
    int i = 5;
    int * p = &i;
    int **q = &p;

    cout << "Address stored by p : " << p << endl;
    cout << "Address stored by q : " << q << endl;
    
    cout << "Value stored by p : " << *p << endl;
    cout << "Value stored by q : " << **q << endl;

    //  incrementing the values pointed by p:
    (*p)++;
    cout << "Value stored by p : " << *p << endl;
    cout << "Value stored by q : " << **q << endl;

    //  incrementing the values pointed by q:
    (**q)++;
    cout << "Value stored by p : " << *p << endl;
    cout << "Value stored by q : " << **q << endl;

    return 0;
}