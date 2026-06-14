// last Ocuurance 

#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int> arr, int i ,int target){
    // base case
    if(i == arr.size()){
       return -1;
    }

    //pahle call for next
    int idxFound = lastOccur(arr , i+1 , target);
     
    if(idxFound == -1 &&  arr[i] == target){
        return i;
    }
    return idxFound;
}

int main(){
    vector<int> arr = {1,2,3,3,3,4,5};
    int index = lastOccur(arr , 0 ,3);
    cout<<"last Occurance = "<<index<<endl;
    return 0;
}