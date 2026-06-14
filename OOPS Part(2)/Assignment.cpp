// Create a class to store Complex numbers . Using operator over loading, create the logic to subtract one complex number from another.

// #include <iostream>
// using namespace std;

// class Complex{
//     int real;
//     int img;

//     public:

//     Complex(int r , int i){ // make a parameter constructor -------------------------
//         real = r;
//         img = i;
//     }

//     void showNum(){
//         cout<<real<<" + "<<img<<"i\n";
//     }

   
//     //operator overloading for -
//     void operator - (Complex & c2){
//         int resReal = this->real - c2.real;
//         int resImg = this->img - c2.img;
//         Complex c3(resReal , resImg);
//         cout<<"res =";
//         c3.showNum(); // it makes the resReal and resImg in the format of complex number 
        
//     }

// };

// int main(){
//     Complex c1(1,2);
//     Complex c2 (4,5);

//     c1.showNum();
//     c2.showNum();

//     c1-c2;

//     return 0;
// }

//Creat a class BankAccount with private attributes account Number and balance. Implement public methods deposit(), withdraw(), and getBalance() to manage the account.

// #include<iostream>
// using namespace std;

// // creating a BankAccount class 
// class BankAccount{
//    long long AccountNo = 123556887990LL;
//    long long  balance = 100000000;
    
//    public:
//    void deposit(){
//     cout << "amount to be deposit\n";
//    }
//    void withdraw(){
//     cout<<"amount to be withdraw\n";
//    }
//    void getBalance (){
//     cout<<"Balance : "<<balance<<endl; // class ka andar ka function private ko access kar sakta hai , aur phir ye function hum main class mein use kar lete hai ------
//    }
 

//    // getters for balance
//     long long  getbal(){
//     return balance;
//    }

//    // getters for account no.
//     long long getAcc (){
//       return AccountNo; 
//    }

// };

// int main(){
//     BankAccount ba1;
//     cout <<ba1.getbal()<<endl ; // using getters 
//     cout << ba1.getAcc()<<endl;
//     ba1.getBalance(); // using functions 

//     return 0;
// }


//Create a base class Person with attributes name and age. Derive a class Student from Person and add an additional attribute studentID. Implement a method display StudentInfo() in the Student class to display all details . In main function Student class object will be created in this format : Student student ( " Alice " , 20 ," S12345 " );


#include<iostream>
using namespace std;
  

class Person{
    public:
    string name ;
    int age ;
// craete constructor 
Person( string name , int age ){
    this->name = name ;
    this->age = age ;
}
};

class Student : public Person{
    public:
    int studentId;
    Student( string name , int age ,int studentId): Person(name , age ){
        this->studentId = studentId;
    }

    void StudentInfo(){
        cout<<"student name = "<<name<<endl;
        cout<<"student age = "<<age<<endl;
        cout<<"student Id = "<<studentId<<endl;
    }
};

int main(){
    Student S1("Prachi", 20 ,145);
    S1.StudentInfo();
     
    return 0;
}
