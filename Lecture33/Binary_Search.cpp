#include <iostream>
using namespace std;

bool binary_search(int * arr, int start, int end, int ele){
    int mid = start + (end-start)/2;

    if(start > end){
        return false;
    }
    if(arr[mid] == ele){
        return true;
    }
    
    if(ele > mid){
        return binary_search(arr, mid+1, end, ele);
    }
    else{
        return binary_search(arr, start, mid-1, ele);
    }
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << binary_search(arr, 0, 9, -1) << endl;
    return 0;
}