// using for each loop for printing the each value of the string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "prachi singh";

    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<"-";
    }
    cout<<endl;

    for (char ch :str){
        cout<<ch<<"_";
    } 
    cout<<endl;   
    return 0;

}