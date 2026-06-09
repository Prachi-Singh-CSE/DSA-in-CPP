// function overloading-------------------------

#include<iostream>
using namespace std;

int sum(int a ,int b){
    cout<<(a+b)<<endl;
    return a+b;
}

double sum(double a ,double b){
    cout<<(a+b)<<endl;
    return a+b;
}

int product(int a ,int b){
    cout<<(a*b)<<endl;
    return a*b;
}

double product(double a ,double b){
    cout<<(a*b)<<endl;
    return a*b;
}

int main(){
     
    sum(4,6);
    sum(1.6,2.3);
    product(2,6);
    product(1.3,4.2);
    return 0;
}