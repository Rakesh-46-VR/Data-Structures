#include<iostream>
using namespace std;

// type -> 1 -> Max
// type -> 0 -> Min
int minmax(int arr[], int size, bool type){
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(type == 1){
            if(temp < arr[i]){
                temp = arr[i];
            }
        }else{
            if(temp > arr[i]){
                temp = arr[i];
            }
        }
    }
    return temp;
}

int main() {
    int arr[6] = {6,45,5,-21,0,1};
    cout << minmax(arr , 6 , 1) << endl;
    cout << minmax(arr , 6 , 0) << endl;
}