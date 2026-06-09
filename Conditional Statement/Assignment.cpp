//  Question 1 : write a c++ program to get a number from the user and print whether its positive , negative or zero

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter the num = \n";
//     cin>>num;

//     if(num > 0){
//         cout<<"num is positive!";
//     }else if (num<0){
//         cout<<"num is negative!";
//     }else{
//         cout<<"num is 0";
//     }
//     return 0;

// }

//Question2 : Write a C++ program that take s a year from the user and print whether that year is a leap year or not.

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter the year =\n";
//     cin>>num;
    
//     if (num%4 == 0){
//         if (num%100 == 0){

//             if (num%400 == 0){

//                 cout<<"entered year is also divisible by 400 that's why it is a leap year";
//             }
//             else{
//                 cout<<"entered year is not divisible by 400 that's why it is not a leap year ";
//             }
//         }
//         else{
//             cout<<"entered year is not divisible by 100 that's why it is a leap year";
//         }
//     }
//     else{
//         cout<<"entered year is not a leap year!";
//     }

//     return 0;

// }





// print the output 

// #include<iostream>
// using namespace std;

// int main() {

//     int a=63,b=36; 

//     bool x = (a<b) ? true:false;

//     int y =(a>b) ?a:b ; cout <<x<<","<<y<<endl;

//     return 0;
// }


// Armstrong number or not------------------------

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter 3 digit  numnber =\n";
    cin>>num;

    int temp = num;
    int firstDigit = temp%10;
    temp = temp/10;
    int secondDigit = temp%10;
    temp = temp/10;
    int thirdDigit = temp;

    int firstDigitCube = firstDigit*firstDigit*firstDigit;
    int secondDigitCube = secondDigit*secondDigit*secondDigit;
    int thirdDigitCube = thirdDigit*thirdDigit*thirdDigit;

    if ((firstDigitCube+secondDigitCube + thirdDigitCube)== num){
        cout<<"You have provided an armstrong number";
    }
    else{
        cout<<"You haven't provided an armstrong nummber";
    }
    return 0;
 Satement
}