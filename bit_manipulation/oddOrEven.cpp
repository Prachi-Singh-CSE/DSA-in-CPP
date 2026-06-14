// check for odd and even 

#include<iostream>
using namespace std;

void oddOrEven(int num){
    if((num & 1 )== 0){ // (!(num&1))
        cout<<"even\n";
    }else{
        cout<<"odd\n";
    }
}

int main(){
    oddOrEven(8);
    oddOrEven(3);
    return 0;
}
