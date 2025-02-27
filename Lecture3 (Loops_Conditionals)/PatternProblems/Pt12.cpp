#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1, start = 'A';
    while(i<=n){

        int j = 1;
        while (j<=n){
            cout << char(start++) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}