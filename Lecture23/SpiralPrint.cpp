#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>> & matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int total = rows * cols;
    int count = 0;

    int startRow = 0;
    int startCol = 0;
    int endingRow = rows-1;
    int endingCol = cols-1;

    while(count < total){
        
        // Starting row print :
        for (int i = startCol; count < total && i <= endingCol; i++)
        {
            cout << matrix[startRow][i] << " ";
            count++;
        }
        startRow++;

        // Ending col print : 
        for (int i = startRow; count < total && i <= endingRow; i++)
        {
            cout << matrix[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // Ending Row :
        for (int i = endingCol; count < total && i >= startCol; i--){
            cout <<  matrix[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // Starting col :
        for (int i = endingRow; count < total && i >= startRow; i--)
        {
            cout << matrix[i][startCol] << " ";
            count++;
        }
        startCol++;

    }
    cout << endl;
}

int main() {
    // vector<vector<int>> arr= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    vector<vector<int>> arr= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    // vector<vector<int>> arr= {{1,2,3}, {4,5,6}, {7,8,9}};
    spiralPrint(arr);
    return 0;
}