// counting sorting problem-------------------

#include<iostream>
#include<climits>
using namespace std;

void printArr(int *arr , int n){
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countSort(int arr[], int n){
    int freq[100000] ; /// range assume
    int minVal = INT_MAX, maxVal = INT_MIN;

    //1st step - O(n)
    for(int i=0; i<n; i++){
        freq[arr[i]]++; // this the index of freq
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);

    }

    //2nd step- O(range) = max - min
    for(int i=minVal, j=0; i<=maxVal; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[] = {1,3,5,2,5,7,4,3,4,6};
    int n = sizeof(arr)/sizeof(int);
    countSort(arr,n);
    return 0;
}