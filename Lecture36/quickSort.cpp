#include <iostream>
using namespace std;

int partition(int s, int e, int * arr){
    int count = 0;

    int pivot = arr[s];

    for(int i=s+1; i<=e; i++){
        if(pivot >= arr[i]) count++;
    }

    pivot = s + count;
    swap(arr[pivot], arr[s]);

    int i = s;
    int j = e;
    while(i< pivot && j > pivot){
        while(arr[i] <= arr[pivot]) i++;
        while(arr[j] > arr[pivot]) j--;

        if(i<pivot && j > pivot){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivot;
}

void quickSort(int s, int e, int * arr){
    if(s>=e){
        return;
    }
    int pivot = partition(s, e, arr);

    quickSort(s, pivot-1, arr);
    quickSort(pivot+1, e, arr);
}

int main() {
    
    int arr[7] = {9,9,9,8,8,7,7};

    quickSort(0, 6, arr);

    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}