//print star pattern--------------

// *
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value = \n";
    cin>> n;

    for(int i =1; i<=n; i++){
        char val = '*';
        for(int j =1; j<=i; j++){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}