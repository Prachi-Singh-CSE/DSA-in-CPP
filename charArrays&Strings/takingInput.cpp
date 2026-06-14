// taking input for char arrays ---------------------

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char word[30];// need to enter the valid ramge for input ;
    char sentence[100];

    cin>>word; // in cin it only considered the string before the white space and ignore the  after that 
    cin.getline(sentence, 100 ,'&');
    cout<<"your entered word  = "<<word<<endl;
    cout<<"length of the string = "<<strlen(word);
    cout<<"your entered word  = "<<sentence<<endl;
    cout<<"length of the string = "<<strlen(sentence);

}