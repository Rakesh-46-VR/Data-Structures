#include<iostream>
#include<list>
using namespace std;

void print(list<int> &a){
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    print(l);

    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    print(l);

    l.erase(l.begin(), l.end());

    print(l);
}