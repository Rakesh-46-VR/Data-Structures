#include <iostream>
using namespace std;

int main() {
    char arr[5] = "abcd";
    char * ch = arr;
    cout << arr << endl;
    cout << ch << endl;

    char temp = 'z';

    char * p = &temp;

    cout << temp << endl;
    cout << p << endl;

    return 0;
}