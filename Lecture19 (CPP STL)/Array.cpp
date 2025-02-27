#include<iostream>
#include<array>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    array<int, 4> a = {1,2,3,4};

    cout << arr[0] << endl;
    cout << a[0] << " " << a.at(1) << endl;

    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << a.size() << endl;
    cout << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
}