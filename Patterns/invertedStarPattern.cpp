// inverted star pattern ---------------------------------

// * * * * *                   
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout<<"enter the number = \n";
    cin>>n;

    for(int i =1; i<=n; i++){
        char val = '*';
        for(int j = 1; j<=n-i+1; j++){  // formula = (n-i+1)
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}

