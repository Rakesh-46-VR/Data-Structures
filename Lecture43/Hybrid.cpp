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

class D {
    public:
        void print(){
            cout << "Inherited from D" << endl;
        }
};

class C: public D, public A {

};

int main() {
    C obj2;                                                                         
    obj2.A::print();
    obj2.D::print();
    return 0;
}