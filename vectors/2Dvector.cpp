// creating a 2d vector---------------------

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,3,5},{4,5,6},{2,5,8}};
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

