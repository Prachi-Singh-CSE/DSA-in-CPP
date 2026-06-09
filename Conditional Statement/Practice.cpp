// print largest of two numbers

// #include<iostream>
// using namespace std;

// int main(){

//     int a,b;
//     cout<<"enter value of a =\n";
//     cin>>a;
//     cout<<"enter value of b = \n";
//     cin>>b;

//     if(a>b){
//         cout<<"largest number is a\n";

//     } else{
//         cout<<"largest number is b\n";
//     }
//     return 0;
// }

// // print of a nummber is even or odd

// #include <iostream>
// using namespace std;

// int main(){

//     int a;
//     cout<<"enter value of a =\n";
//     cin>>a;
    

//     if(a%2==0){
//         cout<<"a is even\n";

//     } else{
//         cout<<"a is odd\n";
//     }

//     return 0;
// }

// Income Tax calculator

// #include<iostream>
// using namespace std;

// int main(){
//     int income;
//     cout<<"Enter the income( in lakhs) here :\n";
//     cin>>income;

//     if (income<5){
//         cout<<"0% Tax";

//     }else if(income>5 && income<10){
//         cout<< 0.2 * income;

//     }else if(income>10){
//         cout<<0.3 * income;
//     }
//     return 0;

// }

// print largest of 3 nummbers 

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of a :\n";
    cin>>a;
    cout<<"Enter the value of b :\n";
    cin>>b;
    cout<<"Enter the value of c :\n";
    cin>>c;

    if(a>b){
        if (a>c){
            cout<<"a is largest";
        }else{
            cout<<"c is largest";

        }
    }else{
        if(b>c){
            cout<<"b is largest";
        }else{
            cout<<"c is largest";
        }
    }

    return 0;

}