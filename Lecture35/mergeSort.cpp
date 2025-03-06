#include <iostream>
using namespace std;

void merge(int * arr, int s, int e){
    int mid = s+ (e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int * first = new int[len1];
    int * second = new int[len2];

    // Copy array first
    int k=s;
    for(int i=0; i<len1; i++){
        first[i] = arr[k++];
    }

    // Copy array second
    k = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[k++];
    }

    int mainArrayIndex = s;

    // Merge two arrays :
    int p1 = 0;
    int p2 = 0;
    while(p1<len1 && p2<len2){
        if(first[p1] > second[p2]){
            arr[mainArrayIndex++] = second[p2++];
        }else{
            arr[mainArrayIndex++] = first[p1++];
        }
    }

    while(p1<len1){
        arr[mainArrayIndex++] = first[p1++];
    }

    while(p2<len2){
        arr[mainArrayIndex++] = second[p2++];
    }
}

void mergeSort(int * arr , int start, int end){
    if(start >= end){
        return;
    }

    int mid = start + (end-start)/2;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}

int main() {
    int arr[5] = {5,4,3,2,1};

    mergeSort(arr, 0, 4);

    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}