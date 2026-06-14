// #include<iostream>
// using namespace std;

// // pass by value

// void changeA(int a ){// this the copy of the original value 
//      a = 30;
//     cout<<a<<endl;
// }

// int main(){
//     int a = 10;
//     changeA(a);
//     cout<<a<<endl; // value of the original value is same as the previous one
//     return 0;
// }

//...................................................................................................

// #include<iostream>
// using namespace std;

// void changeA(int *ptr){ // create a pointer in which address of stores
//     *ptr = 40; // stores diff value of a by dereference
//     cout<<*ptr<<endl;
// }

// int main(){
//     int a = 20; // declare a ;
//     changeA(&a); // call address of a 
//     cout<<a<<endl;// since the changes occurs in original location the original value also changes 
//     return 0;
// }


//..........................................................................................

#include<iostream>
using namespace std;

//pass by reference using initialised reference varible 

void changeA(int &b){
    b = 100;
    cout<<b<<endl;

}

// pass by reference by non initialised refernce variable

void changeB(int &param){
    param = 50;
    cout<<param<<endl;
}


int main(){
    int a = 30;
    int &b = a;
    changeA(a);
    cout<<a<<endl;
    changeB(a);
    cout<<a<<endl;
    return 0;
}