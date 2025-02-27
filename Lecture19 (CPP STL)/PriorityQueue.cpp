#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int> p;
    p.push(5);
    p.push(4);
    p.push(10);
    p.push(1);

    cout << "Max heap" << endl;
    cout << p.size() << endl;
    p.pop();
    cout << p.size() << endl;
    cout << p.top() << endl;

    
    priority_queue<int , vector<int> , greater<int >> mini;
    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);

    cout << "Min heap" << endl;
    cout << mini.size() << endl;
    mini.pop();
    cout << mini.size() << endl;
    cout << mini.top() << endl;
}