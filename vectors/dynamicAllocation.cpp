// dynamic memory allocation ---------------------

#include<iostream>
using namespace std;

int main(){
    // int arr[100] = {1,2,3,4,5,6}; // static memory allocation 

    int size;
    cin>>size;

    int *arr =  new int [size]; // new dynamic memory is allocated using new keyword

    int x =1;
    for (int i=0 ; i<size; i++ ){
        arr[i] = x;
        cout<<arr[i]<<" ";
        x++;
    }
    cout<<endl;

    return 0;
}