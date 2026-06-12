// #include<iostream>
// using namespace std;

// int main(){
//     int marks[50];
//     int num[50] = {1,2,3};
//     int digits[] = {12,23,32,42,56,67};

//     cout<<marks[1]<<endl;
//     cout<<num[1]<<endl;
//     cout<<num[7]<<endl;
//     cout<<digits[4]<<endl;
//     cout<<digits[30]<<endl;

//     return 0;
// }

// input and output in array------------------------------------------------

#include<iostream>
using namespace std;

int main(){

    int n;   // we can also take the value of length as a input
    cout<<"enter the length of array = ";
    cin>>n;

    int arr[n] ;
    // int n = sizeof(arr)/sizeof(int);
    // cout<<n<<endl;

    for(int i = 0; i<n; i++){
        cout<<"enter value "<<i<<"=";
        cin>>arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" , ";
    }

    return 0;
}