#include<iostream>
#include<queue>
using namespace std;

// FIFO -> first in first out
int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << q.size() << endl;
    cout << q.front() << " ";
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;

}