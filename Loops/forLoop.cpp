// for loop ------------------
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     for(num = 1; num <=10 ; num++){
//         cout<<"num is ="<<num <<"\n" ;
//     }

//     cout<<endl;
//     cout<<"The last num is = "<<num<<endl;
//     return 0;
// }

// print Prachi singh 5 times-------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int i;
//     for(i=1;i<=5;i++){
//         cout<<"Prachi Singh\n";
//     }
//     cout<<endl;
//     return 0;
// }

// print number 1 to n ------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n , i;

//     cout<<"Enter the value of n = ";
//     cin>>n;

//     for(i=1 ; i<=n ; i++){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// print sum of the first N natural nummbers---------------------

#include<iostream>
using namespace std;

int main(){
    int num ;
    int sum = 0 ;

    cout<<"Enter the valur of num = ";
    cin>>num;

    for( int i = 0 ; i<= num ; i++){
      sum = sum + i;
    }
    cout<<"sum is ="<<sum<<endl;
    return 0;
}