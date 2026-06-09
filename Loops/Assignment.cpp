//Question1:   WAP to find the Factorial of a number entered by the user . 

//Hint  : factorial of a number (n) = n * (n-1) * (n-2) * (n-3) * ...... * 1 and exists for positive numbers only .We write factorial as n! So , factorial of 0!=1, 1!=1, 2!=2, 3!=6, 4!=24  and soon.

//Note  -  Please do not confuse factorial with NOT EQUAL TO operator,they are not the same.

// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the number = \n";
//     cin>> n;
//     int fact = 1;

//     for ( int i = n; i>=1; i--){
//         //cout<<i<<endl;
//         fact = fact*i;

//     }
//     cout<<"factorial of the number is ="<<fact<<endl;
//     return 0;

// }
 

//Question 2 : WAP to print the multiplication table of a number , entered by the user.
//  #include<iostream>
//  using namespace std;

//  int main(){

//     int n;
//     cout<<"enter the number = ";
//     cin>>n;
    
//     cout<<"Table of the number --------"<<n<<endl;

//     for(int i = 1; i<= 10; i++){
//        int table = n*i;
//        cout<<table<<endl;
//     }
//     return 0;
//  }


//Question 3 : WAP to input a number and check whether the number is an Armstrong number or not.

// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter 3 digit  numnber =\n";
//     cin>>num;

//     int temp = num;
//     int firstDigit = temp%10;
//     temp = temp/10;
//     int secondDigit = temp%10;
//     temp = temp/10;
//     int thirdDigit = temp;

//     int firstDigitCube = firstDigit*firstDigit*firstDigit;
//     int secondDigitCube = secondDigit*secondDigit*secondDigit;
//     int thirdDigitCube = thirdDigit*thirdDigit*thirdDigit;

//     if ((firstDigitCube+secondDigitCube + thirdDigitCube)== num){
//         cout<<"You have provided an armstrong number";
//     }
//     else{
//         cout<<"You haven't provided an armstrong nummber";
//     }
//     return 0;
//}


//Question 4 : For a positive N ,WAP that prints all the prime numbers from 2 to N .(Assume N >= 2).

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number = ";
    cin>> n;

    

    for(int i = 2; i<n; i++){
        //if(n%i != 0 && n%2 !=0){

            cout<<i<<" ";
        //}
    }
      //cout<<"Entered nummber is not a prime number ";
    
   return 0;

}


//Question 5 :For a positive N , WAP that prints the first N Fibonacci numbers.

//(Assume N >= 2) Fibonacci series :0,1,1,2,3,5,8,13,21,34.... This is a series where each number is a sum of previous 2 numbers in these ries .

 // Eg : 1 = 0 + 1 ,
 // 2 = 1 + 1,
 //3 = 1 + 2,
 //5 = 2 + 3, 
//8 = 3 + 5
//& soon