//question 1-------------------------------------------------------------------------------------

//Write a Function to clear the range of bits from i to j in a given number .

// ( i & j are counted backwards from the right end of the number)

//Input : num = 15 ,
// i = 1 , j = 3 
//Output : 1


// #include<iostream>
// using namespace std;

// void clearBitInRange(int num , int i , int j ){
//     int a = (~0 << (j+1));  
//     int b = ((1<<i) - 1);

//     int bitMask = a|b;
//     num  = num & bitMask;

//     cout<< num <<endl;
// }

// int main(){
//     clearBitInRange(31,1,3);
//     return 0;
// }

// question 2 -----------------------------------------------------------------------------------------------
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 1:

// Input: nums = [2,2,1]

// Output: 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int singleNumber( vector<int> nums){
//     int answer = 0;
//     for (int i=0 ; i<nums.size(); i++){
//         answer ^= nums[i];
//     }
//     cout<<answer<<endl;
//     return answer;

// }

// int main(){
//     vector<int> nums = {4,2,1,2,3};
//     singleNumber(nums);
//     return 0;
// }

// question 3--------------------------------------------------------------------------------------------------
// You are given a 0-indexed integer array nums.

// The effective value of three indices i, j, and k is defined as ((nums[i] | nums[j]) & nums[k]).

// The xor-beauty of the array is the XORing of the effective values of all the possible triplets of indices (i, j, k) where 0 <= i, j, k < n.

// Return the xor-beauty of nums.

// Note that:

// val1 | val2 is bitwise OR of val1 and val2.
// val1 & val2 is bitwise AND of val1 and val2.
 

// Example 1:

// Input: nums = [1,4]
// Output: 5
// Explanation: 
// The triplets and their corresponding effective values are listed below:
// - (0,0,0) with effective value ((1 | 1) & 1) = 1
// - (0,0,1) with effective value ((1 | 1) & 4) = 0
// - (0,1,0) with effective value ((1 | 4) & 1) = 1
// - (0,1,1) with effective value ((1 | 4) & 4) = 4
// - (1,0,0) with effective value ((4 | 1) & 1) = 1
// - (1,0,1) with effective value ((4 | 1) & 4) = 4
// - (1,1,0) with effective value ((4 | 4) & 1) = 0
// - (1,1,1) with effective value ((4 | 4) & 4) = 4 
// Xor-beauty of array will be bitwise XOR of all beauties = 1 ^ 0 ^ 1 ^ 4 ^ 1 ^ 4 ^ 0 ^ 4 = 5.

#include<iostream>
#include<vector>
using namespace std;

int xorBeauty(vector<int> nums , int n ){
    int effectiveVal ;
    int answer = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                // cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                effectiveVal = ((nums[i] | nums[j]) & nums[k]);
                cout<<effectiveVal<<endl;
                answer ^= effectiveVal;
              
            }
        }
    }
    cout<< " this is the final answer:"<<answer;
    return answer;
   
}

int main(){
    vector<int> nums = {15,45,20,2,34,35,5,44,32,30};
    int n = nums.size();
    xorBeauty(nums , n);
    return 0;
}



