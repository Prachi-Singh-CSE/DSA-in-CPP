// check for the power of 2 

#include<iostream>
using namespace std;

bool isPowerOf2(int num){
    if ((num & (num-1))== 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    cout<<isPowerOf2(16)<<endl;
    cout<<isPowerOf2(77)<<endl;
    cout<<isPowerOf2(3)<<endl;
    return 0;
}