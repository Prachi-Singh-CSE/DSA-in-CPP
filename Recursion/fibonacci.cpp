// print Nth fibonacci Numbers 

#include<iostream>
using namespace std;

// function
int fibonacci(int n){
    
    if (n == 0 || n == 1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);

};



int main(){
    int res = fibonacci(7);
    cout<<"result = "<<res<<endl;
    return 0;
}