// spiral matrix problem ------------------------------

#include<iostream>
using namespace std;

void spiralMatrix(int mat[][4] , int n , int m){

    int srow = 0;
    int scol = 0;
    int erow = n-1;
    int ecol = m-1;

    while(srow<=erow && scol<=ecol){

    // for top row
    for(int j = scol; j<=ecol; j++){
        cout<<mat[srow][j]<<" ";
        
    }

    // for right column
    for(int i = srow+1; i<=erow; i++){
       cout<< mat[i][ecol]<<" ";
    }

    // for bottom row
    for(int j = ecol-1; j>=scol; j--){
        if(srow == erow){ // special case in odd matrix , since it repeat because already consider in top row
            break;
        }
       cout<< mat[erow][j]<<" ";
    }

    // for left column
    for(int i = erow-1; i>=srow+1; i--){
        if(scol == ecol){// special case in odd matrix , since it repeat because already consider in right column
            break;
        }
       cout<< mat[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
}

}

int main(){
    int mat[5][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16},
                    {17,18,19,20}};

   spiralMatrix(mat,5,4);

}
