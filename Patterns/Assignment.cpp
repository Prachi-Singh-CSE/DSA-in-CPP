   // question 2--------------------------------------------------- 
// n = 5
//     *****
//    *****
//   *****
//  *****
// *****

// #include<iostream>
// using namespace std;

// int main(){

//     int n =5;
//     cout<<"Enter the number =";
//     cin>> n;

//     for( int i = 1; i<=n; i++){
//         //spaces
//         for( int j = 1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for( int j = 1; j<=n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// question 3-----------------------------------------------------

//         1  
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"Enter the number = ";
//     cin>> n;


//     for (int i = 1 ; i <=n; i++){
//         //spaces
//         for(int j = 1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         //  i to 1 reverse number
//         for(int j =i; j>=1;j--){
//             cout<<j<<" ";
//         }
//         //2 to i number
//         for(int j = 2; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//      }  
//     return 0;
// }

// question 3 ----------------------------------------------????????????????

// 1
// 0 1
// 1 0 1 
// 0 1 0 1
// 1 0 1 0 1