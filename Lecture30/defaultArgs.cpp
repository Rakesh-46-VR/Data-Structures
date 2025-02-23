#include <iostream>
using namespace std;

// right args only can be default
int func(int a, int b = 1){
    return a/b;
}

int main() {
    int a = 50;
    cout << func(a) << endl;
    cout << func(a, 2) << endl;
    return 0;
}