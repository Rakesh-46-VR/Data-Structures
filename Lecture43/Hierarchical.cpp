#include <iostream>
using namespace std;

class A {
    public:
        void printA(){
            cout << "Inherited from A" << endl;
        }
};

class B: public A {
};


class C: public A {
};

int main() {
    B obj1;
    C obj2;
    obj1.printA();
    obj2.printA();
    return 0;
}