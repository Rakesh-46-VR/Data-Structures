#include<iostream>
using namespace std;

int main() {
    int row , col;
    cout << "Enter number of stars in row : " << endl;
    cin >> row ;
    cout << "Enter number of stars in col : " << endl;
    cin >> col ;
    int i = 0 , j;
    while(i<row){
        j = 0;
        while(j<row){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}