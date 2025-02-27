#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int i = 1 , sum = 0;
    while(i<=n){
        sum += i++;
    }

    int dirsum = ((n) * (n + 1)) / 2;

    cout << "The sum of first " << n << " integers is : " << sum << endl;
    cout << "Direct sum using formula : " << dirsum << endl;
}