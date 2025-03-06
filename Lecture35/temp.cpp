#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int minimumNet(int n, int k, vector<bool> fish)
{
    // Write your code here.
    int sum = accumulate(fish.begin(), fish.end(), 0);
    cout << sum << endl;
     if (sum < k){
        return -1;
    }else{
        // Calculate it :
        for(int j=k; j<=n; j++){
            for(int i=0;i<=n-k;i++){
                int temp = accumulate(fish.begin() + i, fish.begin() + i + j, 0);
                cout << "Temp : " << temp << endl;
                if(temp == k){
                    return j;
                }
            }
        }
    }

    return -1;
}


int main() {
    vector<bool> arr = {1, 0, 0, 1};
    int output = minimumNet(4,2,arr);
    cout << "Final : " << output << endl;
    return 0;
}