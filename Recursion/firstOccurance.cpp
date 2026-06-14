// first occurance 

// WAF to find first occurance of an element in a vector .
//[1,2,3,3,4,2] = first occurance of 3 is at index 2 ------------------------


#include<iostream>
#include<vector>
using namespace std;

// reccurance function
int firstOccurance(vector<int> arr , int i , int target  ){
    // base case 
    if (i == arr.size()){
        return -1;
    }
    // kaam 
    if(arr[i] == target){
        return i;
    }
    return firstOccurance(arr , i+1 , target);
}

int main(){
    vector<int>arr = {1,2,3,3,3,4,5};
    int index = firstOccurance(arr , 0 , 7);
    cout<<"first Ocuurance = "<<index<<endl;
    return 0;
}

