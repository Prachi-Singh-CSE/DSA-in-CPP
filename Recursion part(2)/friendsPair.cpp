// friends pairing 

#include<iostream>
using namespace std;

// recurssive relation 

int friendPairing(int n){
    if (n == 1 || n == 2 ){
        return n;
    }

    return friendPairing(n-1) + (n-1)*friendPairing(n-2);
}

int main(){
    cout<<"no. of ways : "<<friendPairing(4)<<endl;
    return 0;
}