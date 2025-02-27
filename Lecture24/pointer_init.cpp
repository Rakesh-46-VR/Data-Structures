#include <iostream>
using namespace std;

int main() {
    
    int i = 5;

    int *p = 0;
    p = &i;
    cout << "Address stored in prt is : " << p << endl;
    cout << "Value pointed by prt is : " << *p << endl;

    int *q = &i;
    cout << "Address stored in prt is : " << q << endl;
    cout << "Value pointed by prt is : " << *q << endl;


    return 0;
}