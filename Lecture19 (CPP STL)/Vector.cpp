#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    cout << v.capacity() << endl;
    v.push_back(5);
    v.push_back(4);
    v.push_back(1);
    v.push_back(8);
    v.push_back(9);
    cout << v.capacity() << endl;

    cout << v.size() << endl;
    cout << v.at(2) << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;
    v.clear();
    cout << v.capacity() << endl;

    vector<int> a(5, -1);
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
    vector<int> c(a);
    for(int i:c){
        cout << i << " ";
    }

}