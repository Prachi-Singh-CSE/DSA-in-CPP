//convert the string into the upperCase 

#include<iostream>
#include<string.h>
using namespace std;

void toUpper( char word[], int n ){

    for(int i=0 ; i<n; i++){
        char ch = word[i];
        if( ch>='A'&& ch<='Z'){ // already uppercase
            continue;
        }else{ // lowercase
        //    ch = ch - 'a' + 'A'; // do not write in this way because in this changes only occurs in the variable ch not in the arr
        word[i] = ch-'a'+'A'; // this is correct!!

        }
    }
    cout<<word<<endl;
}

int main(){
    char word[] = "PrAcHi";
    
    toUpper(word , strlen(word));
    return 0;

}

// home work problem ---
// convert the string into lowercase ---------------------------

#include<iostream>
#include<string.h>
using namespace std;

void toLower( char word[], int n ){

    for(int i=0 ; i<n; i++){
        char ch = word[i];
        if( ch>='a'&& ch<='z'){ // already uppercase
            continue;
        }else{ // lowercase
        //    ch = ch - 'a' + 'A'; // do not write in this way because in this changes only occurs in the variable ch not in the arr
        word[i] = ch-'A'+'a'; // this is correct!!

        }
    }
    cout<<word<<endl;
}

int main(){
    char word[] = "PrAcHi";
    
    toLower(word , strlen(word));
    return 0;

}