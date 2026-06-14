// You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

// You are given an integer array nums representing the data status of this set after the error.

// Find the number that occurs twice and the number that is missing and return them in the form of an array.

 

// Example 1:

// Input: nums = [1,2,2,4]
// Output: [2,3]


// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> findErrorNums(vector<int> nums) {
//     vector<int> ans;
//     int duplicate ,missing;
//      for (int i=0; i<nums.size()-1; i++){
        
//             if(nums[i] == nums[i+1]){
//                cout<< "duplicate: "  << nums[i]<<endl;
//                duplicate= nums[i];
//                ans.push_back(duplicate);
               
//             }
           
        
//         for(int i=1; i<=nums.size() ;i++){
//             bool found = false;
//             for (int j=0; j<nums.size(); j++){
//                 if(nums[j] == i){
//                     found =true;
//                     break;
//                 }
//                 if(!found){
//                     missing = i;
//                     ans.push_back(missing);
//                 }
//             }

//         }
//     }
//     return ans;
// }
    

// int main(){
//     vector<int> nums = {1,2,2,4};
//     vector<int> ans =  findErrorNums(nums);
//     cout << "["<<ans[0] <<"," << ans[1]<<"]" <<endl;
// }


// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.


#include<iostream>
#include<vector>
using namespace std ;

int waterArea(vector<int> height , int n){

    int area, minNum;

    for(int i=0; i<n; i++ ){
        for(int j=i+1; j<=n; j++){
            for(int k=j; k<n; k++){
            minNum = min(height[i],height[j]);
            area  = minNum*k;
            cout<<area<<", ";
            }

        }
    }
    
    

}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int n = height.size();
    waterArea(height , n);
    return 0;
}

/// incorrect approach