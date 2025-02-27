#include <iostream>
using namespace std;

inline int func(int a, int b){
    return a*b;
}

int main() {
    cout << func(2,3) << endl;
    return 0;
}