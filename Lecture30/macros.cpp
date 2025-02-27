// preprocessive directives
#include <iostream>
using namespace std;

// macro : no memory usage and it just replaces all the variables with the values and also it can't be updated
#define a 4
#define pi 3.14

int main() {
    int r = 6;
    double area = pi * r * r;
    
    cout << area << endl;

    return 0;
}