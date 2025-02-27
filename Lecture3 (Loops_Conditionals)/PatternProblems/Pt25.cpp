#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1, count = 1;
    while(i<=n){
        int j = 1;
        while ( j<=n-i )
        {
            cout << " ";
            j++;
        }
        while (j<=n)
        {
            cout << count++;
            j++;
        }
        cout << endl;
        i++;
    }
}