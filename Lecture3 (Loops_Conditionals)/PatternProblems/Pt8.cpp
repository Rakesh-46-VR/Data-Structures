#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1 , j = 1;
    while (i<=n) {
        j = i;
        while(j <= 2 * i -1){
            cout << j++ << " ";
        }
        cout << endl;
        i++;
    }

}