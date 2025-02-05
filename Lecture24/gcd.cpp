#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0) return b;
    if(b==0) return a;

    while(a != b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
        cout << a << " " << b << endl;
    }
    return a;
}

int main() {
    int a = 24;
    int b = 71;
    int res = gcd(a, b);
    cout << "GDC of " << a << ", " << b << " is " << res << endl;
    cout << "LCM of " << a << ", " << b << " is " << ((a*b) / res) << endl;
    return 0;
}