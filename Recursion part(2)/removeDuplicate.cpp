// remove duplicate problem----------------------

#include <iostream>
using namespace std;

// function 
void removeDuplicate(string str , string ans , int i , int map[26]){
    // base case
    if(i == str.size()){
        cout<<ans<<endl;
        return ;
    }

    char ch = str[i];
    int mapIdx =(int)(ch - 'a');// find the index

    if(map[mapIdx]== true){// duplicate  
        removeDuplicate(str , ans , i+1 , map);
    }
    else{
        map[mapIdx] = true ;
        removeDuplicate(str , ans+ch , i+1 , map);
    }
}

int main(){
    string str = "hello";
    string ans = "";
    int map[26] = {false};
    
    removeDuplicate(str , ans , 0 , map);
    return 0;

}