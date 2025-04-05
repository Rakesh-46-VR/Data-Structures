#include <iostream>
using namespace std;

class Human{

    public:
        int age;
    
    private:
        int weight;
    
    protected:
        int height;

};

class Male : public Human{

    public:
        int color;
    
    int getHeight(){
        return this->height;
    }

    int getAge(){
        return this->age;
    }

    // Private members cannot be accessed
    // int getWeight(){
    //     return this->weight;
    // }
};

int main() {

    Male m1;

    cout << m1.age << " " << m1.getAge() << endl;
    cout << m1.getHeight() << endl;
    // Protected variable cannot be accesses directly
    // cout << m1.height << endl; 
    return 0;
}