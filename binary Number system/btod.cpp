// convert binary number to decimal number-----------------------------
#include<iostream>
using namespace std;

void binToDec(int binNum){
    int n = binNum; // make copy of original number
    int decNum = 0; // in this the final number stores
    int pow = 1; //2^0,2^1,2^2.........

    while( n > 0){
        int lastDigit = n% 10;
        decNum += lastDigit * pow;
        pow = pow * 2;
        n = n/10;
    }

    cout<<decNum<<endl;
}


int main(){
    binToDec(10010);
    return 0;

}