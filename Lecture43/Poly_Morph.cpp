#include <iostream>
using namespace std;

class A{
    public:
        void print(){
            cout << "I AM ONLY PRINT" << endl;
        }
};

class B: public A{
    public:
        void print(){
            cout << "SPECIALIZED PRINT" << endl;
        }
};

int main() {
    B obj;
    obj.print();  
    return 0;
}