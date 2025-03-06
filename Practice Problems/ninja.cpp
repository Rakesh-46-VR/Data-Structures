#include <iostream>
#include <string>
using namespace std;

#include <bits/stdc++.h> 

string binary(int x){
    string s = "";
    while(x!=0){
        int rem = x % 2;
        char ch = '0' + rem;
        s = ch + s;
        x = x/2;
    }
    return s;
}

int makeItEqual(int a, int b, int c) {
    string num1 = binary(a);
    string num2 = binary(b);
    string num3 = binary(c);
    
    int lenght_1 = num1.length();
    int lenght_2 = num2.length();
    int lenght_3 = num3.length();

    int max_bits = 32;
    // Make equal sizes : 
    for(int i=0; i<max_bits; i++){
        if(lenght_1 < max_bits){
            num1 = '0' + num1;
            lenght_1++;
        }
        if(lenght_2 < max_bits){
            num2 = '0' + num2;
            lenght_2++;
        }
        if(lenght_3 < max_bits){
            num3 = '0' + num3;
            lenght_3++;
        }
    }
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    int * position = new int[max_bits];
    fill(position, position + max_bits, 0);

    for(int i=0; i<max_bits; i++){
        if(num3[i] == '1'){
            position[i] = 1;
        }
    }
    int count = 0;
    for(int i=0; i<max_bits; i++){
        if(position[i] == 1){
            if(num1[i] == '0') count++;
            if(num2[i] == '0') count++;
        }else{
            if(num1[i] == '1' && num2[i] == '1') count++;
        }
    }
    return count;
}


int main() {
    
    int res = makeItEqual(3, 1 ,2);
    cout << res << endl;
    return 0;
}