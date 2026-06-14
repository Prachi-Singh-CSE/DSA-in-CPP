//sort this array of characters using insertion sort in descending order-------------
// char ch[] = {'f','b','a','e','c','d'}


#include<iostream>
using namespace std;

void print(char arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void sortChar(char arr[],  int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev =i-1; 

        while(prev>=0 &&arr[prev]<curr){ //so that sorting occurs in descending order
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    arr[prev+1] = curr;
    }
    print(arr,n);

}

int main(){
    char ch[] = {'f','b','a','e','c','d'};
    int n = sizeof(ch)/sizeof(char);
    
    sortChar(ch,n);

    return 0;
}
//time complexity ===== O(n^2)