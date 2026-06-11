// 2D arrays ------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3] = {{100,100,100},
//                      {34,63,75},
//                      {56,86,98} };
//  for(int i = 0;i<3;i++){
//     for(int j =0 ;j<3; j++){
//       cout<<arr[i][j]<<",";  
//     }
//     cout<<endl;
//  }

//  cout<<arr[0][2]<<endl;

// return 0;
// }


// input and output in an 2D arrays-------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int arr[3][4];
    int n =3 ,m = 4;

 for(int i=0; i<n; i++){
    for(int j =0; j<m; j++){
      cin>>arr[i][j];  
    }
   
 }
 for(int i=0; i<n; i++){
    for(int j =0; j<m; j++){
      cout<<arr[i][j]<<" ";  
    }
   cout<<endl;
 }

return 0;
}