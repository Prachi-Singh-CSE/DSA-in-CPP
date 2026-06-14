// bubble sorting problem-------------------------------

#include<iostream>
#include<algorithm>
using namespace std;
// for printing the sorted array value...............

void printArr(int *arr , int n){
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int*arr, int n ){

    for(int i=0; i<n-1 ; i++){
        bool isSwap = false; //initally we assume that the array is not sorted
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;// now the array is soterd
            }
        }
    //     if(!isSwap){
    //         //array is already sorted 
    //         return;
    //     }
     }
    printArr(arr,n);
}

int main(){
    int arr[] = {5,56,22,45,67,43,12};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    return 0;
}