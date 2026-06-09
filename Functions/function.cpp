// #include<iostream>
// using namespace std;


// void sayHello(){
//     cout<<"hello eveyone !!\n";
// }

// void assistant(){
//     sayHello();
//     cout<<"work is done\n";
// }

// int main(){
//     assistant();
//     return 0;
// }

//forward declaration---------------------------

// #include<iostream>                              
// using namespace std;

// void sayHello(); // forward declaration

// int main(){
//     sayHello();
//     return 0;
// }

// void sayHello(){
//     cout<<"HELLO :)";
// }

// syntax with parameters------------------------

#include<iostream>
using namespace std;

int sum(int a , int b){//  a ,b are the parameters
    int sum = a + b;
    return sum;
}

int main(){
    int s = sum(3,5); // 3,5 are the arguments
    cout<<"sum ="<<s<<endl;
    return 0;

}