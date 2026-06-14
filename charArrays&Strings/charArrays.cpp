// char arrays---------------------------

#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char  arr[] = {'a','b','c','\0'};
// string always written in double inverted commas -> "";
    
    char work[] = "hello prachi ";
    char work1[50] = "hello future millionare";
    char work3[] = {'a','s','f','e','\0'};
    char work4[50] = {'a','s','f','e','\0'};
    cout<<arr<<endl;
    cout<<strlen(arr)<<endl;
    cout <<strlen(work1)<<endl;

}