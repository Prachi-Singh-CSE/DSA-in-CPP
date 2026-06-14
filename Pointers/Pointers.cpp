#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 11;
    int c = 9;
    int *ptr = &a;
    int **pptr= &ptr;
    cout<<&ptr<<"="<<pptr<<endl;
    cout<<&a<< "=" <<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*(&a)<<endl;
    cout<<ptr<<endl;
    return 0;

}