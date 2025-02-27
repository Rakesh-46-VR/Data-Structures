#include<iostream>
using namespace std;

int main() {
    // using cin to get inputs (cin ignores spaces , tabs , newline)
    int a , b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << a << " " << b << endl;

    // using cin.get()
    fflush(stdin);
    cout << "Enter a character : " << endl;
    a = cin.get();
    cout << a << endl;
}