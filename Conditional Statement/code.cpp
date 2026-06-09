// if else ------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int age ;
//     cout<<"enter the age of the person=\n";
//     cin>>age;

//     if(age>18){
//         cout<<"person can vote\n";
//     }else{
//             cout<<"person can't vote\n";
//         }
//     return 0;
// }

// // else if -------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"Enter the marks here :\n";
//     cin>>marks;

//     if (marks >=90){
//         cout<<"Grade A";

//     }else if(marks >=80){
//         cout<<"Grade B";

//     }else{
//         cout<<"Grade C";
//     }
//     return 0;
// }

// // Ternary operator-------------------------

// #include<iostream>
// using namespace std;

// int main(){
    
//     bool isAdult;

//     int age;
//     cout<<"enter the age :\n";

//     cin>>age;
//     isAdult = age >=18 ? true : false;

//     return 0;

// }

// switch statement----------------------

#include<iostream>
using namespace std;

int main(){

    int day;
    cout<<"Enter the day =\n";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
        break;
        case 2:
            cout<<"Tuesday";
        break;
        case 3:
            cout<<"Wednesday";
        break;
        case 4:
            cout<<"Thursday";
        break;
        case 5:
            cout<<"Friday";
        break;
        case 6:
            cout<<"Saturday";
        break;
        case 7:
            cout<<"Sunday"; 
        break;
         default : 
            cout<<"Not a valid day";
    
            return 0;
    }
}