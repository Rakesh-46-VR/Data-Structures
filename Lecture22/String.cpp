#include<iostream>
#include<string>
using namespace std;

void change(int * a){
    (*a)++;
}

int main() {
    int a = 1;
    change(&a);
    cout << a;
}