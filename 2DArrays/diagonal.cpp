// diagonal matrix sum problem --------------------------

#include<iostream>
using namespace std;

int diagonalSum(int mat[][4] , int n , int m ){
    int sum = 0;
    
   // method 1 with TC = O(n^2)

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(i==j){
                sum += mat[i][j];

            }else if(j == n-i-1){
                sum += mat[i][j];
            }   
        }
    }

    //method 2 with TC = O(n)
     
    // for(int i=0; i<n; i++){
    //     sum += mat[i][i]; // pd since i = j
    //     if(i!= n-i-1){
    //         sum += mat[i][n-i-1]; // sd 
    //     }
    // }
    
    cout<<"sum = "<<sum<<endl;
    return sum;
}

int main(){
   int mat[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
diagonalSum(mat,4 ,4);

return 0;
}