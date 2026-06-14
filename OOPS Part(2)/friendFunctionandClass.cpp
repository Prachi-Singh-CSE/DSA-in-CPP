// friend function and class-------------------------------
#include<iostream>
using namespace std;

class A {
    public:
    string secret = "show secrets\n";
    friend class B;
    friend void reveal(A &obj);
};

// friend class 
class B {
    public:
    void show(A &obj){
        cout<<obj.secret<<endl;
    }
};

// friend function
void reveal(A &obj){
    cout<<obj.secret<<endl;
};


int main(){
   A a1;
   B b1;
   b1.show(a1);
   reveal(a1);
    return 0;
}