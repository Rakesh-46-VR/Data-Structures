#include <iostream>
using namespace std;

int getSum(int * arr, int size){
    if(size == 0) return 0;

    return arr[0] + getSum(arr+1, size-1);
}

int main() {

    int arr[1] = {2};

    cout << getSum(arr, 1) << endl;
    
    return 0;
}