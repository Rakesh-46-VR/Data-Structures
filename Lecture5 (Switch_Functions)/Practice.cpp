#include <iostream>
using namespace std;

int main()
{
    int hundred = 0, fifty = 0, twenty = 0, one = 0;

    int n;
    cin >> n;

    int temp = 100;

    while (n != 0)
    {
        switch (temp)
        {
        case 100:
        {
            int notes = n / 100;
            if (notes){
                hundred = notes;
                break;
            }
            temp = 50;
        }
        case 50:
        {
            int notes = n / 50;
            if (notes){
                fifty = notes;
                break;
            }
            temp = 20;
        }
        case 20:
        {
            int notes = n / 20;
            if (notes){
                twenty = notes;
                break;
            }
            temp = 1;
        }
        case 1:
        {
            int notes = n / 1;
            if (notes){
                one = notes;
                break;
            }
        }
        }
        n -= ( n / temp) * temp;
    }
    cout << "Hundreds " << hundred << " Fifty " << fifty << " Twenty " << twenty << " One " << one << endl;
}