#include<iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a character : " << endl;
    a = cin.get(); 
    
    if(a>64 && a<91){
        cout << "The character is Uppercase letter." << endl;
    }else if(a>96 && a<123){
        cout << "The character is Lowercase letter." << endl;
    }else if(a>47 && a<58){
        cout << "The character is Number." << endl;
    }else{
        cout << "The character is symbol." << endl;
    }
}