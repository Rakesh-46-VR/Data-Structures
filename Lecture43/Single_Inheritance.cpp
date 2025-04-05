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

int main() {
    Dog pamorian;
    pamorian.speak();
    return 0;
}