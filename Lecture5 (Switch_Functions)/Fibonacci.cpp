#include<iostream>
using namespace std;

int fib(int n){
    int a = 0 , b = 1;
    int res = 0;
    
    if(n==1) return 0;
    if(n==2) return 1;

    for(int i = 2; i<n ; i++){
        res = a + b;
        a = b;
        b= res;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}