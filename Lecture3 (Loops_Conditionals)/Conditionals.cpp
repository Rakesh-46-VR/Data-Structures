#include<iostream>
using namespace std;

int main() {
    cout << "Conditionals (if , else , if-else-if)" << endl;

    int a , b;
    cout << "Enter two numbers a & b : ";
    cin >> a >> b;
    // if
    if(a < b){
        cout << "a is less than b" << endl;
    }
    
    // if(a > 0){
    //     cout << "a is positive" << endl;
    // }else {
    //     if(a < 0){
    //         cout << "a is negative" << endl;
    //     }else{
    //         cout << "a is 0" << endl;
    //     }
    // }

    // if else if
    if(a > 0){
        cout << "a is positive" << endl;
    }else if( a < 0) {
        cout << "a is negative" << endl;
    }else{
        cout << "a is 0" << endl;
    }

}