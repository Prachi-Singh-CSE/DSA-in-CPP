// print subarrays 

#include<iostream>
using namespace std;

void printSubarray( int *arr , int n){
    for(int start = 0; start<n ; start++){ // loop runs n times 
        for(int end= start; end<n; end++){ // loop runs n times
            //cout<<"("<<start<<","<<end<<")"<<",";
            for(int i = start; i<=end ; i++){ // loop runs n time 
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n= 5;
    printSubarray(arr,n);
    return 0;
}
//therefore the time complexity of the problem is  -> O(n^3)