//Wap  TO  find thr product  of 2 numbers a and b ----------------------------------

// #include<iostream>
// using namespace std;

// int multiply(int a , int b ){
//     int product = a*b;
//     return product;
// }
// int main(){
    
//     int P = multiply( 4,5);
//     cout<<"Product ="<<P<<endl;
//     return 0;
// }


// write a function to print if a number is even or odd--------------------------
 // my method === not so good

// #include<iostream>
// using namespace std;

// int evenFunction(){
//     cout<<"Number is Even\n";
    
// }

// int oddFunction(){
//     cout<<"Number is odd\n";
// }

// int main(){
//     int num;
//     cout<<"enter the num =";
//     cin>>num;

//     if(num%2==0){
//         evenFunction();
//     }
//     else{
//         oddFunction();
//     }
//     return 0;
// }

//teacher's method ----perfect

// #include<iostream>
// using namespace std;


// // even->true, dd->false

// bool isEven(int n){
//     if(n%2==0){
//         return true;
//     }else{
//         return false;
//     }
// }

// int main(){
//     cout<<isEven(5)<<endl;
//     return 0;
// }

// factorial ----------------------------

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n; i++){
//         fact = fact*i;
//     }
//     cout<<"Factorial of ("<<n<<")="<<fact<<endl;
//     return fact;
// }

// int main(){
    
//     factorial(1);
//     factorial(3);
//     factorial(4);
//     factorial(6);
 
//     return 0;
// }

// check for prime numbers----------------------------

#include<iostream>
using namespace std;

// method 1 

bool isPrime(int n){
    if( n == 1 ){
        return false;
    }
    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// method 2

bool isPrime2(int n){
    if( n == 1){
        return false;
    }
    for(int i=2 ; i*i<n ; i++){
        return false;
    }
    
}

int main(){
    cout<<isPrime(55)<<endl;
    return 0;
}