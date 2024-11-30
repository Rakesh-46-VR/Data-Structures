#include<iostream>
using namespace std;

bool search(int arr[], int size, int val){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == val){
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5] = {5, 4, 2, 8, 9};
    cout << "Enter ele to search : " << endl;
    int ele;
    cin >> ele;
    cout << search(arr , 5 , ele) << endl;
}