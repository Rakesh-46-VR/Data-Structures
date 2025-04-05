#include <iostream>
using namespace std;

class A{
    public :
        void print(){
            cout << "From Class A" << endl;
        }

        void onlyA(){
            cout << "I am not overidden by any sub classes :)" << endl;
        }
};

class B :virtual public A{
    public :
        void print(){
            cout << "From Class B" << endl;
        }
};

class C : virtual public A {
    public :
        void print(){
            cout << "From Class C" << endl;
        }
};

class D : public B, public C {

};



int main() {
    D objD;
    objD.B::print();
    objD.C::print();
    
    objD.onlyA();
    objD.onlyA();

    return 0;
}