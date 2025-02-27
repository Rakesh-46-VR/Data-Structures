#include <iostream>
using namespace std;

void reverse(char * ptr, int start, int end) {
    if(start > end){
        return;
    }
    swap(ptr[start], ptr[end]);
    reverse(ptr, start+1, end-1);
}

int main() {
    char s[] = "rakeshb";
    int size = sizeof(s);

    cout << s << endl;
    reverse(s, 0, size-2);
    cout << s << endl;

    return 0;
}