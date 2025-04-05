#include <iostream>
using namespace std;

class Animal{
    public:
        int age;
    
    private:
        int weight;

    public:
        void speak(){
            cout << "Speaking..." << endl;
        }
};

class Dog : public Animal{

};

class Dog_Disabled : public Dog{

};

int main() {
    Dog_Disabled pamorian;
    pamorian.speak();
    return 0;
}