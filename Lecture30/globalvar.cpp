#include <iostream>
using namespace std;

// global scope
int i = 21; // any one can change and it will reflect everywhere , to prevent this we can use reference variables

void a() {
    cout << i << endl;
}

void b() {
    cout << i << endl;
}

int main() {
    
    cout << i << endl;
    a();
    b();
    return 0;
}
