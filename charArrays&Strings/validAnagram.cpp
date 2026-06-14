// check  wheather the given str1 and str2 ae valid anagram or not -----------------------------

#include<iostream>
#include<iostream>
using namespace std;

bool isAnagram( string str1 , string str2){ // there is no need to use side because it's not a pointer it's an object--
    if (str1.length()!= str2.length()){
        cout<<"not a valid anagrams\n";
        return false;
    }

    int count[26] ={0};
    for(int i=0; i<str1.length(); i++){
        int idx = str1[i] -'a';
        count[idx]++;
    }

    for( int i=0; i<str2.length(); i++){
        int idx = str2[i]-'a';
        if(count[idx] == 0){
            cout<<"not a valid anagrams\n";
            return false;
        }
        count[idx]--;
    }
    cout<<"valid anagrams\n";
    return true;
}

int main(){
    string str1 = "rat";
    string str2 = "act";

    isAnagram(str1,str2);
    return 0;

}

