#include <iostream>
using namespace std;

long long int power(int a, int b) {
    cout << "Called" << endl;
    if(b == 0) return 1;
    if(b == 1) return a;

    long long int ans = power(a, b/2);

    if(b & 1){
        return  a * ans * ans;
    }
    return ans * ans;
}

int main() {
    int a = 2;
    int b = 10;
    long long int ans = power(a, b);
    cout << ans << endl;
    return 0;
}