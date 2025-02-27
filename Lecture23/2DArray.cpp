#include<iostream>
using namespace std;

void print(int arr[][3]){
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void sumOfRow(int arr[][3], int row, int col){
    for(int i = 0; i<col; i++){
        int sum = 0;
        for(int j = 0; j<row; j++){
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void largestRow(int arr[][3], int row, int col){
    int largestIndx = 0;
    int maxSum = 0;
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        largestIndx = sum > maxSum ? i : largestIndx;
        maxSum = max(maxSum , sum);
    }
    cout << largestIndx<< endl;
}

int main() {
    int arr[3][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    sumOfRow(arr, 3 ,3);
    largestRow(arr, 3 ,3);
}