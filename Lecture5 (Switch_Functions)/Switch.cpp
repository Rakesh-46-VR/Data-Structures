#include<iostream>
using namespace std;

int main() {
    int n = 1;

    switch (n)
    {
    case 1:
        cout << "First case" << endl;
        break;
    case 2:
        cout << "Second case" << endl;
        break;
    case 3:
        cout << "Third case" << endl;
        break;
    
    default:
        cout << "" << endl;
        break;
    }
}