#include<iostream>
#include<map>
using namespace std;

int main() {
    
    map<int, string> m;  //Ordered map
    m[1] = "Hi";
    m[5] = "Hello";
    m[10] = "Beautiful";
    m.insert({6 , "Pop"});

    for(auto a : m){
        cout << a.first << " : " << a.second << endl;
    }

    map<int , string>:: iterator it = m.find(5);
    cout << (*it).first << endl;
    cout << (*it).second << endl;

    it = m.erase(++it);
    
    cout << (*it).first << endl;
    cout << (*it).second << endl;

}