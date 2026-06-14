// update ith bit
// WAF to update the ith bit in a number according to given value (0 or 1)
// 1) num = 7 , i=2 , val = 0;
// 2) num = 7 , i=3 , val = 1;

#include<iostream>
using namespace std;

void UpdateIthBit(int num , int i , int val){

    num = num & ~(1<<i);
    num = num | (val<<i);
    cout<<num<<endl;

}
      
int main(){
    UpdateIthBit(7,2,0);
    UpdateIthBit(7,3,1);
    return 0;
}