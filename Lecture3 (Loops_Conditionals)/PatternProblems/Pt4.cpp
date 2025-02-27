#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1 , temp = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << temp++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}