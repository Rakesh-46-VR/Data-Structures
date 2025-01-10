#include<iostream>
#include<set>
using namespace std;

void print(set<int> s){
    for(int i:s){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(3);
    print(s);
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    print(s);

    cout << "5 is present or not : "  << s.count(5) << endl;
    cout << "-5 is present or not : "  << s.count(-5) << endl;

    
    set<int>::iterator it5 = s.find(5);
    cout << "Element : "<< *it5  << endl;

    for(auto itr=it5; itr!=s.end(); itr++){
        cout << *itr << endl;
    }
}