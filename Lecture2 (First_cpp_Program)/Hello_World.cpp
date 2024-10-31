#include<iostream>
using namespace std;

int main(){
    
    // output stream
    cout << "Hello world" << "\n";
    
    // data types
    int integer = -96;
    unsigned int range = 5632;
    char letter = 'b';
    float f = 2.5;
    double pi = 3.14215211;

    cout << integer << endl << range << endl << letter << endl << f << endl << pi << endl;

    // implicit type casting
    int a = 'a';
    cout << a << endl;
    char expl = char(int(22.26352));

    // explicit type casting
    cout << expl << endl;
}