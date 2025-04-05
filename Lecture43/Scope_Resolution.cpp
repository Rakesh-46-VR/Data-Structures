#include <iostream>
using namespace std;

class A {
    public:
        void print(){
            cout << "Inherited from A" << endl;
        }
};

class B {
    public:
        void print(){
            cout << "Inherited from B" << endl;
        }
};

class C: public A, public B {

};

int main() {
    C obj2;                                                                         
    obj2.A::print();
    obj2.B::print();
    return 0;
}