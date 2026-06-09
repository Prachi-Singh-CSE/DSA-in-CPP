#include<iostream>
#include<math.h>
using namespace std;


int reverse(int n){
    int res = 0;

    while(n>0){
        int lastDigit = n%10;
        res = res*10 + lastDigit;
        n = n/10;
    }

    return res;
}

bool isPalindrome (int num){
    int revNum = reverse(num); // calling reverse function
    return num == revNum; // check wheather the entered number and its reverse are same or not
    
}



// function to calculate the sum of digits of the number 

int digitsSum(int n){
    int sum = 0;
     
    while(n>0){
        int lastDigit = n%10;
        sum = sum+lastDigit;
        n =n/10;

    }
    return sum;
}

// Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

int wholeSq(int a , int b){
    int ws = (a*a+b*b + 2*a*b);
    cout<<"(ab)Wsquare ="<<ws<<endl;
}

// Write a function that prints the largest of 3 numbers.

int largestOf3(int a, int b, int c){
    
    if(a>=b && a>=c){
        return a;

    }else if(b>=c){
        return b;

    }else{
        return c;
    }
}

// Write a function that accepts a character(ch) as parameters & returns the character that occurs after ch in the English alphabet . Eg : input=‘c’, return value = ‘d’ 
// Note: for  ch =‘z’, return ‘a' .

char Character(char ch){
    if (ch == 'z'){
        return 'a';
    } else{
        return ch+1;
    }
    
}



int main(){
    cout<<"next character ="<<Character('z')<<endl;
    cout<<"largest is "<<largestOf3(1,3,4)<<endl;
    cout<<"sum of all the digits of the number = "<<digitsSum(101)<<endl;
    cout<<isPalindrome(212)<<endl;
    wholeSq(2,4);
    return 0;
}