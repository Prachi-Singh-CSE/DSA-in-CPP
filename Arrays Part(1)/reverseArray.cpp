// with extra space----------Making copy of an array-----------------------------------------

#include<iostream>
using namespace std;

void printArr( int *arr ,int n){
    for(int i =0; i<n ; i++){
     cout<<arr[i]<<",";   
    }
}

int main(){
    int arr[] = {3,5,7,9,2,8,6};
    int n = sizeof(arr)/sizeof(int);

    int copyArr[n];

    for(int i =0; i<n; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for( int i = 0; i<n; i++){
        arr[i] = copyArr[i];
    }

    printArr(arr,n);
    return 0;
}

// without extra space -----------swaping array-----------------------------------

#include<iostream>
using namespace std;

void printArr( int *arr ,int n){
    for(int i =0; i<n ; i++){
     cout<<arr[i]<<",";   
    }
}

int main(){
    int arr[] = {7,35,22,54,23,11};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end = n-1;
    while(start<end){
        int temp = arr[start]; // there is also an in-built function of swap //    swap(arr[start], arr[end])
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}
