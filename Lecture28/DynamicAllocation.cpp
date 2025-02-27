#include <iostream>
using namespace std;

int main() {
    
    // static 
    int arr1[5]= {0};
    cout << sizeof(arr1) << endl;
    // never do this -> bad practice due to limited size of the stack memory
    // int n;
    // cin >> n;
    // int arr[n];

    // dynamic allocation
    int * n = new int;
    cin >> *n;

    int * arr2= new int[*n];
    cout << *n << " " << sizeof(arr2) << endl;

    delete []arr2;
    delete n;
    return 0;
}