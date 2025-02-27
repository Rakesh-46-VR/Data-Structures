#include<iostream>
using namespace std;

int bitCount(int n){
    int bit, ct = 0;
    while(n!=0){
        bit = n & 1;
        if(bit == 1){
            ct++;
        }
        n = n >> 1;
    }
    return ct;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << (bitCount(a)+bitCount(b)) << endl;
}