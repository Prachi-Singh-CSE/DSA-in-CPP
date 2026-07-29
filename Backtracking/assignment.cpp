//Sample Input :int maze[][]={{1,0,0,0},
                        //  {1,1,0,1},
                        //  {1,1,0,0},
                        //  {0,1,1,1}}

// The possible directions that it can take to move in the maze are 'U'(up) i.e. (x,y-1), 'D'(down) i.e. (x,y+1), 'L'(left) i.e. (x-1,y), 'R'(right) i.e. (x+1,y).


#include<iostream>
using namespace std;

bool isblocked( int maze[][4], int r, int c, int n, int m ){
    for (int i=r; i<n; i++){
        for(int j=c; j<m; j++){
            if(maze[i][j] == 0){
                 return true;
            }else{
                return false ;
            }

        }
        return true;
    }
    
}

int ratMaze(int r , int c, int n ,int m , string ans  ){
    if(r==n && c==n){
        return 1;
    }
    if(r>=n || c>=n){
        return 0;
    }

    int val1 = ratMaze(r-1, c, n, m, ans+"U");
    int val2 = ratMaze(r+1, c, n, m, ans+"D");
    int val3 = ratMaze(r, c-1, n, m, ans+"L");
    int val4 = ratMaze(r, c+1, n, m, ans+"R");

    return val1+val2+val3+val4;

}

int main(){
    int maze[4][4]={{1,0,0,0},
                    {1,1,0,1},
                    {1,1,0,0},
                    {0,1,1,1}};


    string ans = "";
    cout<<ratMaze(0 ,0 , 4, 4, ans)<<endl;
    
    return 0;

}