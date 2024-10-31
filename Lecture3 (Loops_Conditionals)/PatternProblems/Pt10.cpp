#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // method 1
    // int i = 65;
    // n = n+i;
    // while (i < n){
    //     int k = 65;
    //     while(k < n){
    //         cout << char(i) << " ";
    //         k++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // method 2
    int i = 1;
    while (i <= n){
        int k = 1;
        while(k <= n){
            cout << char('A' + i - 1) << " ";
            k++;
        }
        cout << endl;
        i++;
    }
}