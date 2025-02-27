#include<iostream>
#include<deque>
using namespace std;

void print(deque<int> &a){
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    deque<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    print(a);

    a.push_back(10);
    a.push_front(8);
    print(a);
    a.pop_back();
    a.pop_front();
    print(a);

    // size , front , back, at:
    cout << "Size : " << a.size() << endl;
    cout << "Front : " << a.front() << endl;
    cout << "Back : " << a.back() << endl;
    cout << "At : " << a.at(1) << endl;

    a.erase(a.begin() , a.begin()+1);
    print(a);
    a.clear();
    print(a);
}