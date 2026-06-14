// print numbers in decreasing order from n to 1 

#include<iostream>
using namespace std;

// recursive function 
void printNum(int n){
    if ( n==0){
        return;
    }
    cout<<n<<endl;
    return  printNum(n-1);
      
}

int main(){
   printNum(10);
   
    return 0;
}