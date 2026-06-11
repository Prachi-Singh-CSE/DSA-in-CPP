//Question1 : Print the number of all 7’s that are in the 2d array. // that is how many 7 are present in it 
//Example : Input-int arr[][] = {{4,7,8},{8,8,7}} ; n=2, m=3     Output-2

// #include<iostream>
// using namespace std;


// int main(){
//     int arr[2][3] = {{4,7,8},{8,8,7}};
//     int n = 2 , m = 3;

//     int countOf7 = 0;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++ ){
//            if(arr[i][j]==7){
//             countOf7++;
//            }
//         }
//     }
//     cout<<"count of 7 ="<<countOf7<<endl;

//   return 0;
// }


//Question2 : Print out the sum of the  numbers in the second row of the “nums” array . 
// Example: Input - int nums [][] = {{1,4,9},{11,4,3},{2,2,3}};

// #include<iostream>
// using namespace std;

// int sumOfNum(int nums[][3], int n , int m ){

//     int sum = 0;
//     for(int j = 0 ; j<3 ; j++){
//         int digits = *(*(nums+1)+j);
//         cout<<digits<<" ";
//         sum = sum + digits;
//     }


//     // another simple logic -------
//    // sum of 2nd row elements 

//     for(int j=0; j<m; j++){
//         sum+=nums[1][j];
//     }
//     cout<<"sum of numbers = "<<sum<<endl;
// }

// int main(){
//     int nums [3][3] = {{1,4,9},{11,4,3},{2,2,3}};

//     sumOfNum(nums,3,3);
//     return 0;
// }


//write the program to find transpose of a matrix

// matrix ----------

// a11 a12 a13
// a21 a22 a23

// transpose matrix ------------------

// a11 a21
// a12 a22
// a13 a23


#include<iostream>
using namespace std;

int main(){
    
    int row = 2, column = 3;

    int mat[][column] = {{ 11, 12, 13},{21 ,22 ,23}};
    

    int trans[column][row] = {{0}}; // since n and m are variable there we need to declare them before runtime

    for ( int i=0; i<row; i++){
        for(int j=0; j<column; j++){
           trans[j][i] = mat[i][j]; // use = not ==

        }
    }
     // print the transpose matrix

     for ( int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<  trans[i][j]<<"  ";

        }
        cout<<endl;
    }  
    return 0;
}