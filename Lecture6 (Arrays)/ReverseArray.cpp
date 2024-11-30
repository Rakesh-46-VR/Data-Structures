#include<iostream>
using namespace std;

void reverse(int arr[] , int size){

    for (int i = 0 , j=(size-1); i < (size/2) ; i++, j--)
    {
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
    int arr[5] = {5,8,1,5,3};

    printArray(arr, 5);
    reverse(arr , 5);
    printArray(arr, 5);
}