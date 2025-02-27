#include<iostream>
#include<stack>
using namespace std;
// LIFO -> last in first out
int main() {
    stack<string> s;
    s.push("how are you?");
    s.push("hello");
    s.push("hi");

    cout << s.empty() << endl;
    cout << s.size() << endl;

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
}