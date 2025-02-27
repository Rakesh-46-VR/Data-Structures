#include<iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of row : " << endl;
    cin >> row;
    int i = 1;
    while(i <= row){
        int j = 1;
        while(j <= row){
            cout << j << " ";
            // cout << (row - j + 1) << " ";  // reverse
            j++;
        }
        cout << endl;
        i++;
    }
}