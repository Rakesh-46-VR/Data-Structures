#include <iostream>
using namespace std;

class A{
    public: 
        void speak(){
            cout << "Speaking..." << endl;
        }
};

class B{
    public: 
        void bark(){
            cout << "Barking..." << endl;
        }
};

class C: public A, public B{

};

int main() {
    C obj;
    obj.bark();
    obj.speak();
    return 0;
}