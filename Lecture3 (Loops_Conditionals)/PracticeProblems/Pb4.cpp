#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int i = 2 , sum = 0;
    while(i<=n){
        sum += i;
        i+=2;
    }
    cout << "Sum of even numbers from 2 to "<< n << " is : " << sum << endl;
}