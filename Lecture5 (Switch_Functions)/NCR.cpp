#include<iostream>
using namespace std;

int factorial(int n){
    int temp = 1;
    int res = 1;
    while(temp <= n){
        res *= temp;
        temp++;
    }
    return res;
}

int nCr(int n, int r){
    if(n < r)
        return 0;
    
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main() {

    cout << nCr(5, 1) << endl;
}