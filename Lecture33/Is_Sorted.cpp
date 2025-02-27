#include <iostream>
using namespace std;

bool is_sorted(int * arr, int size){
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]){
        return false;
    }else{
        return is_sorted(arr+1, size-1);
    }
}

int main() {
    
    int arr [5] = {1,2,3,7,6};

    int val = is_sorted(arr, 5);
    cout << val << endl;
    return 0;
}