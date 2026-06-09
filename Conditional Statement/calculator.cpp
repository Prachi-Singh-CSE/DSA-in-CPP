// Basic Calculator (+,-,*,/) ----------------------

#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    char op;

    cout<<"Enter the num1 =\n";
    cin>>num1;

    cout<<"Enter the num2 =\n";
    cin>>num2;

    cout<<"Addition = (+)\n";
    cout<<"Substraction = (-)\n";
    cout<<"Multiplication = (*)\n";
    cout<<"Divison = (/)\n";

   
    cout<<"Enter the symbol for specific operation =\n";
    cin>>op;

    switch(op){
        case '+': cout<<"Addition ="<<num1+num2<<endl;
                break;
        case '-': cout<<"Substraction ="<<num1-num2<<endl;
                break;
        case '*': cout<<"Multiplication ="<<num1*num2<<endl;
                break;
        case '/': cout<<"Divison ="<<num1/num2<<endl;
                break;
        default:
            cout<<"NOT A VALID OPERATION";
    }

 return 0;

}
