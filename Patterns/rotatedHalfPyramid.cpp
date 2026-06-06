//inverted /rotated  half pyramid pattern -------------------------------------

//      *
//    * *
//  * * *
 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value =";
//     cin>> n;

//     for( int i = 1; i<=n ; i++){
        
//         for( int j = 1; j <= n; j++){ // in this code there is spacing problem due to which code alignment is  not so good..........
//             if ( j <= n-i){
//             cout<<"  "; // two spaces
//             } 
//             else{
//             cout<< "* "; //  start + spaces 
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//by teacher's method **

#include<iostream>
using namespace std ;

int main(){

    int n;
    cout<<"Enter the value of n =";
    cin>> n;

    for ( int i =1; i<= n ; i++){
        // spaces
        for (int j = 1 ; j <=n-i; j++){
            cout<<" ";

        }
        //stares
        for (int j = 1; j<= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}