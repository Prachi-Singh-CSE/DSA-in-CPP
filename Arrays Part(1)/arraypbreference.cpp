#include<iostream>
using namespace std;

void printArr(int nums[], int n){ // array name is passed as a pointer in the function thersfore we need to pass a size of array as a peremeter and arguement::
    for(int i=0; i<n; i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
}

int main(){
    
    int arr[] = {1,2,34,45,566,32,45};
    int n = sizeof(arr)/sizeof(int);
    cout<<"size of arr="<<sizeof(arr)<<endl; // 20
    printArr(arr , n); //1,2,34,45,566,32,45
    return 0;
}