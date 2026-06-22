// merge sort problem-------------------------------------
#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si ,int mid , int ei){
    vector<int>temp;
    int i = si;
    int j = mid+1;

    while(i<=mid && j<= ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]); 
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    // loop for left values in array
    while(i<=mid){
        temp.push_back(arr[i++]);
    }

    while(j<=ei){
        temp.push_back(arr[j++]);
    }


    // temp vector to orginal array loop
    for (int idx = si , x =0 ; idx<=ei ; idx++){
        arr[idx] = temp[x++];
    }
}


void mergeSort(int arr[] , int si , int ei){
    // base case
    if (si>=ei){
        return;
    }
    int mid = si + (ei-si)/2 ;

    // recursive calls
    mergeSort(arr , si , mid);
    mergeSort(arr , mid+1, ei);

    merge(arr , si , mid , ei);
}

// printing the array-----
void printArr(int arr[] , int n ){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[7] = {6,7,2,5,3,4,1};
    int n =7;
    mergeSort(arr , 0 , n-1);
    printArr(arr , n );
    return 0;
}