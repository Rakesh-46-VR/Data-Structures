#include <iostream>
#include <vector>
using namespace std;

void max_min(vector<vector<int>> &mat) {
    // code here
    int rows = mat.size();
    int cols = mat[0].size();
    
    int min = mat[0][0];
    int max = mat[0][cols-1];
    for(int i=0 ; i<rows ; i++){
        if(min > mat[i][0]) min = mat[i][0];
    }
    for(int i=0; i<rows; i++){
        if(max < mat[i][cols-1]) max = mat[i][cols-1];
    }
    cout << max << " " << min << endl;
}

int main() {
    vector<vector<int>> arr= {{1,2,3}, {4,5,6}, {7,8,9}};
    max_min(arr);
    return 0;
}
