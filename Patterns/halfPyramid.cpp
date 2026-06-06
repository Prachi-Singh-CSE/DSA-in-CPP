// half pyramid pattern----------------

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value = ";
    cin>>n;

    for( int i = 1; i<=n; i++){
        for( int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// character pyyramid patttern---------------------------

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter =";
    cin>> n;
    char ch  = 'A';


    for( int i = 1; i<=n; i++){
        for( int j = 1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}