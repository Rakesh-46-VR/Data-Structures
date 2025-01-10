#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for (size_t i = 0; arr[i] != '\0'; i++) count++;
    return count;
}

void reverseString(char arr[]){
    int start = 0;
    int end = getLength(arr) - 1;
    while (start < end){
        swap(arr[start++] , arr[end--]);
    }
}

int main() {

    char name[10];
    cout << "Enter your name : ";
    cin >> name;

    cout << name << endl;
    cout << "Length : " << getLength(name) << endl;
    reverseString(name);
    cout << name << endl;

    return 0;
}