#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int i = 2;
    while(i<n){
        if((n % i) == 0){
            cout << "Not a prime number" << endl;
            break;
        }
        i += 1;
    }
    if(i == n){
        cout << "A prime number" << endl;
    }
}