#include<iostream>
using namespace std;

int linearSearch(int *arr , int n ,int key){
    for( int i=0; i<n ; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,23,63,76,24,89,43};
    int key = 9;
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr, n , key)<<endl;
    return 0;
}