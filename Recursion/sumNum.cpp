// sum of N natural numbers 

#include <iostream>
using namespace std;

// function 
int sumNum(int n){
    
    if (n == 0){
        return 0;
    }
    return n + sumNum(n-1);
}


int main(){
    int sum = sumNum(3);
    cout<<sum<<endl;
    return 0;
}