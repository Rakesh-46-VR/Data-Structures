#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "address arr : " << arr << endl;
    cout << "address arr : " << &arr[0] << endl;

    cout << "first element using index : " << arr[0] << endl;
    cout << "first element using pointers : " << *arr << endl;

    int i = 0;
    while(i<10){
        cout << *(arr+i++) << endl;
    }

    int * p = arr;

    cout << *p << endl;

    cout << sizeof(arr) << endl;
    cout << sizeof(p) << endl;
    return 0;
}