#include <iostream>
using namespace std;

bool is_present(int * arr, int size, int ele){
    if(size == 0) return false;

    if(arr[0] == ele) return true;

    return is_present(arr+1, size-1, ele);
}

int main() {
    
    int arr[10] = {1,4,5,8,7,5,6,9,3,5};

    cout << is_present(arr, 10, 1) << endl;
    return 0;
}