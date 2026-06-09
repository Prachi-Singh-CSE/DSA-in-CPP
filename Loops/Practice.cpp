// print the square pattern using for loop -----------------

// #include<iostream>
// using namespace std;

// int main(){

//     int side;
//     cout<<"Enter the side of the Square = ";
//     cin>> side;

//     for( int i = 1; i<=side ; i++){
//         for(int j = 1 ; j<= side ; j++){
//             cout<<"*"<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// print the number n to 1 using for loop-------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n = ";
//     cin>>n;

//     for(int i = n ; i>=1 ; i--){
//         cout<<i<<" "<< endl;
//     }
//    return 0 ;
// }

// print the sum of the digits of the number using while loop------

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;

//     int digitSum = 0;

//     while( n > 0){
//         int lastDigit = n%10;
//         digitSum = digitSum + lastDigit;
//         n = n/10;
//     }
//      cout<<"Sum = "<< digitSum<<endl;

//      return 0;

// }

// print the sum of the odd digits of the number using while loop --------

// #include<iostream>
// using namespace std;

// int main(){

//     int n ;
//     cout<<"enter the number =";
//     cin>> n;

//     int digitSum = 0;

//     while( n > 0){
//         int lastDigit = n% 10;

//         if( lastDigit%2 != 0){

//             digitSum = digitSum + lastDigit;

//         }
//         n = n/10;
//     }
//     cout<<"sum = "<<digitSum<<endl;
//     return 0;
// }

// print the digits of the given number in reverse using while loop -----------

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the number = ";
//     cin>>num;

//     while( num > 0){
//         int lastDigit = num%10;
//         cout<< lastDigit<<"";
//         num = num/10;
//     }
//    return 0;
// }


// Reverse a given number & print the result. ------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n ;
//     cout<<"Enter the value  of n =";
//     cin>> n;

//     int result = 0;

//     while( n > 0){
//         int lastDigit = n%10;
//         result = result * 10 + lastDigit;
//         n = n/10;
//     }
//     cout<<"The reverse number is ="<<result<<endl;
//     return 0;
// }


// WAP to show numbers entered by the users except multiple of 10---------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     do{
//         cout<<"Enter the number =";
//         cin>> n;
//         if (n%10==0){
//             continue;
//         }
//         cout<<"entered number is ="<<n<<endl;

//     }while(true);

//     return 0;
// }


//**** check if a number is prime or not-----------------------------------

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Enter the number =";
    cin>> n;

    bool isPrime = true;

    for(int i = 2; i <= n-1 ;i++){ // also can write [i<=sqrt(n)]
        
        if( n % i == 0){  // i is a factor of n ; i completely divides n; n is non prime ;
            isPrime = false;
            break;
         }
        }
         if(isPrime == true){

            cout<<"Number is Prime "<<endl;

         }
         else{
            cout<<"Number is NOT a Prime"<<endl;
         }
    
    return 0;
}