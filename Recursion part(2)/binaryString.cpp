// binary string problem 
// print all binary string of size N without any consecutive 1s------------------------

#include<iostream>
using namespace std;

// recursive function
void binaryString(int n , int LastPlace , string ans){
    if (n == 0){
        cout<<ans<<endl;
        return;
    }
    if(LastPlace != 1){
        binaryString(n-1 ,0 , ans + '0');
        binaryString(n-1 ,1 , ans +'1');
    }else{
        binaryString(n-1 , 0 , ans + '0');
    }
}

int main(){
    string ans = "";
    binaryString(4, 0 , ans);

    return 0;

}