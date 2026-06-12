// print the max sum of the subarray using------> brute force method

#include<iostream>
#include<climits>
using namespace std;

void maxSumSubarray1(int *arr,int n){

     int maxSum = INT_MIN;  // means -infinit  and INT_MAX meaans +infinty

   for(int start =0; start<n ; start++){
        for(int end =start; end<n; end++){
            int currSum = 0;
            for(int i =start; i<=end ;i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum = max(maxSum,currSum);
        }
        cout<<endl;
   }
   cout<<"Maximum sum of the subarray1  = "<<maxSum<<endl;
};
// slightly optimized burte approach------------------------------

void maxSumSubarray2(int *arr,int n){

     int maxSum = INT_MIN;  

for(int start =0; start<n ; start++){ //  assume start index = 2
    int currSum = 0;
        for(int end =start; end<n; end++){ // end index = 2,3,4,5
            
                currSum+=arr[end];  // its adds the new index value to the already exist sum
            
          
            maxSum = max(maxSum,currSum);
        }
        cout<<endl;
   }
   cout<<"Maximum sum of the subarray2 = "<<maxSum<<endl;
};

// max subarray sum using Kadane's Algorithm  (very important)

void maxSumSubarray3(int *arr,int n){

    int maxSum = INT_MIN;  
    int currSum =0;

     for(int i=0; i<n ;i++){
        currSum +=arr[i];  
        maxSum = max(maxSum , currSum);

        if(currSum<0){ // bcoz it minimize the currSum value
            currSum = 0; // 
        }   
    }
    cout<<"max sum ="<<currSum<<endl;
};


int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;

    maxSumSubarray1(arr,n);
    maxSumSubarray2(arr,n);
    maxSumSubarray3(arr,n);
    
    return 0;
}