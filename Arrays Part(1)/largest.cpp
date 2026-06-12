//find the largest value in the array -------------------------

#include<iostream>
using namespace std;

int main(){
     
    int arr[] ={12,34,24,53,287,2,234,67,235,22,3};
    int n  = sizeof(arr)/sizeof(int);
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i<n; i++ ){
        // for largest value 
        if(arr[i]>max){
            max = arr[i];
            // cout<<"assigning value "<<arr[i]<<" to max"<<endl;     // just for clearification
        }
        // for smallest value
        if(arr[i]<min){
            min = arr[i];
            // cout<<"assigning value "<<arr[i]<<" to max"<<endl;     // just for clearification
        }
    }
    cout<<"maximum value ="<<max<<endl;
    cout<<"minimum value ="<<min<<endl;
    return 0;
}