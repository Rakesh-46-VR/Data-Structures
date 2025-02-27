#include<iostream>
using namespace std;

void swapAltr(int arr[], int size){
    if(size <= 1) return;

    for (int i = 1 , j=1 ; j < size; j += 2)
    {
        i = j-1;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {5,8,1,5,3,6};

    printArray(arr, 6);
    swapAltr(arr , 6);
    printArray(arr, 6);
}