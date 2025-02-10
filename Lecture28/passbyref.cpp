#include <iostream>
using namespace std;

void update(int n){
    n++;
}

void updateref(int & n){
    n++;
}

int main() {
    
    int n = 8;

    cout << "Before : " << n << endl;
    update(n);
    cout << "Before : " << n << endl;
    
    cout << endl;

    cout << "Before : " << n << endl;
    updateref(n);
    cout << "Before : " << n << endl;

    return 0;
}