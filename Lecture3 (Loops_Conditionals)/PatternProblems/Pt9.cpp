#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    
    while (i<=n){
        int j = i;
        while (j>0){
            cout << j-- << " ";
        }
        cout << endl;
        i++;
    }
}