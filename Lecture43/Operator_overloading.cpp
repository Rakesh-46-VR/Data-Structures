#include <iostream>
using namespace std;

class Demo{

    public:
        int x;
        int y;
    
        Demo(int i, int j): x(i), y(j) {}

        int operator+ (Demo & obj){
            return this->x * obj.x;
        }
};

int main() {
    Demo a(4,5);
    Demo b(8,9);

    cout << a + b << endl;
    return 0;
}