// search in sorted matrix by using staicase search method---------------------------------------------


// starting froom the 40 -------
// #include<iostream>
// using namespace std ;

// bool staircaseSearch( int mat[][4], int n, int m , int key){
//     // int cell = mat[0][m-1];

//     int i = 0;
//     int j = m-1;
    
//     while(i<n && j>=0){
//          if ( mat[i][j] == key ){
            
//             cout<<"found at cell  = "<<"("<<i<<","<<j<<")"<<endl;    
//             return true;     
//         }
//          else if (mat[i][j] < key){
//             i ++;
//          }
//          else if (mat[i][j] > key){
//             j --;
//          }
//     }
//     cout << " key not found"<<endl;
// }

// int main(){
//     int mat[4][4] = {{10,20,30,40},
//                     {15,25,35,45},
//                     {27,29,37,48},
//                     {32,33,39,50}};

//     int n = 4, m =4 , key = 33;
//     staircaseSearch( mat , 4, 4, 33);

// }

// now starting from the 32------------------------

#include<iostream>
using namespace std;

bool staircase2Search(int mat[][4], int n, int m, int key){
    int i = n-1;
    int j = 0;

    while(i>=0 && j<m){
        if ( mat[i][j] == key ){
            
            cout<<"found at cell  = "<<"("<<i<<","<<j<<")"<<endl;    
            return true;     
        }
         else if (mat[i][j] < key){
            j ++;
         }
         else if (mat[i][j] > key){
            i --;
         }
    }
    cout << " key not found"<<endl;
}
    
int main(){
    int mat[4][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};

    int n = 4, m =4 , key = 33;
    staircase2Search( mat , 4, 4,33 );
}