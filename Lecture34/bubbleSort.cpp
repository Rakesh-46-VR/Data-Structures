#include <iostream>
using namespace std;

void sortArray(int * arr, int end){
    if(end == 0 || end == 1) return;

    for(int i = 0; i<end-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    sortArray(arr, end-1);
}

void print(int * arr, int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    print(arr, size);
    sortArray(arr, size);
    print(arr, size);
    return 0;
}