#include <iostream>
#include <string>
using namespace std;

string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void sayDigit(int n){
    if(n == 0){
        return;
    }
    int digit = n % 10;
    sayDigit(n/10);
    cout << arr[digit] << " ";
}

int main() {
    sayDigit(563298);
    return 0;
}