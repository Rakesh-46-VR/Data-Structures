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

class Male : protected Human{

    public:
        int color;
    
        
    int getAge(){
        return this->age;
    }
    
    int getHeight(){
        return this->height;
    }

    // Private members cannot be accessed
    // int getWeight(){
    //     return this->weight;
    // }
};

int main() {

    Male m1;

    // Public variables are marked as protected
    // cout << m1.age << endl; 

    cout << m1.getAge() << endl;
    cout << m1.getHeight() << endl;
    
    // Protected variable cannot be accesses directly
    // cout << m1.height << endl; 
    return 0;
}