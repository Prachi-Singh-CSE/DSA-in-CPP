// print x to the power n

#include<iostream>
#include<cmath>
using namespace std;

// function
int xToPowerN(int x , int n){
    // base case
    if(n == 0){
        return 0;
    };

    int halfPower  =  pow(x , n/2); // maths pow function 
    int halfPowerSqr = halfPower*halfPower;

    if (n%2 != 0){
        return x*halfPowerSqr;
    } 

    return halfPowerSqr;

};
 
int main(){
    cout<<xToPowerN(2,5)<<endl;
    return 0;
}