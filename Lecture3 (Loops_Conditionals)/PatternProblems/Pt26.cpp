#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i<=n){
        int j = 1;

        // Space
        while (j <= n-i){
            cout << " ";
            j++;
        }
        //  Left triangle
        int k = 1;
        while (k <= n-j+1)
        {
            cout << k;
            k++;
        }

        // Right triangle
        k -= 2;
        while (k>=1){
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}