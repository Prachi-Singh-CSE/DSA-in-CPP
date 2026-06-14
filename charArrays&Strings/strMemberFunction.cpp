// member functions of the string 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello Prachi";
    // member functions str.length()--------------

    cout<<str.length()<<endl;

    //member functions str.at(idx)----------------

    cout<<str.at(6)<<endl;

    //member function str.substr(startIdx, size)
    
    
    cout<<str.substr(6 ,11)<<endl;

    // member function str.find()
    string str1 = "hello guys ! currently I am learning dsa with c++";
     
    cout<<str1.find("dsa")<<endl;

    return 0;
}