// <cstrings function----------------------------

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // strcpy = value copy 
    char str1[100];
    char str2[100]  = "prachi singh";

    cout<<strcpy(str1,str2)<<endl;
    cout<<str1<<endl;

    // strcat = concatinate 
    char str3[100] =  "hello";
    char str4[100] = " the future millionre";

    cout<<strcat(str3, str4)<<endl;

    // strcmp = comparing 
    char str5[100] = "abc";
    char str6[100] = "xyz";

    cout<<strcmp(str5,str6)<<endl;

    return 0;

}