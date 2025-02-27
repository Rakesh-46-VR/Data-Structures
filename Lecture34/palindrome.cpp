#include <iostream>
using namespace std;

bool ispali(string & s, int start){
    int end = s.length()-1-start;

    if(start > end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    return ispali(s, start+1);
}

int main() {
    string r = "abba";

    cout << ispali(r, 0) << endl;
    return 0;
}