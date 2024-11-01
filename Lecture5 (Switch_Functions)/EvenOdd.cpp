#include<iostream>
using namespace std;

int isOdd(int a){
    if(a & 1){
        return 1;
    }
    return 0;
}

int main() {
    int a;
    cin >> a;
    if(isOdd(a)){
        cout << "Odd" << endl;
    }else{
        cout << "Even" << endl;
    }
}