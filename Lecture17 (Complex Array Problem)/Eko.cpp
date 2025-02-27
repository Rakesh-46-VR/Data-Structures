// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> & arr, int trees, int mid, int meters){
    int req = 0;
    for(int i=0; i<trees; i++){
        int temp = (arr[i] >= mid) ? (arr[i] - mid) : 0;
        req += temp;
    }
    if(req < meters) return false;
    return true;
}

int maxHeight(vector<int> & arr , int trees , int meters){
    int start = 0;
    int end = -1;
    int ans;
    for(int i=0; i<trees; i++) end = max(end , arr[i]);
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(arr , trees , mid , meters)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    // Write C++ code here
    vector<int> arr = {4, 42, 40, 26, 46};
    int meters = 20;
    cout << maxHeight(arr , arr.size() , meters);

    return 0;
}