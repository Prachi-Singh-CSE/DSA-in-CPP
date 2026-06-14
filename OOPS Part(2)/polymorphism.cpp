// compile time polymorphism 

//1) function overloading 

#include <iostream>
using namespace std;

class Print {
    public:
    void show(int x){
        cout<<"integer : "<<x<<endl;
    }

    void show(string str){
        cout<<"string : "<<str<<endl;
    }
};

int main(){
    Print obj1;
    obj1.show(45);
    obj1.show("hello");
    return 0;
}



//2) operator overloading ----------------

#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:

    Complex(int r , int i){
        real = r;
        img = i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    // operator overloading for +
    void operator + (Complex & c2){
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal , resImg);
        cout<<"res =";
        c3.showNum();
        
    }

    //operator overloading for -
    void operator - (Complex & c2){
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c3(resReal , resImg);
        cout<<"res =";
        c3.showNum();
        
    }

};

int main(){
    Complex c1(1,2);
    Complex c2 (4,5);

    c1.showNum();
    c2.showNum();

    c1+c2;
    c1-c2;

    return 0;
}



 // run time polymorphism--------------------------------

 //1)function overriding

#include<iostream>
using namespace std;

class Parent{
    public:

    void show (){
        cout<<"parent class show..\n";
    }
};

class Childs : public Parent{
    public:

    void show(){
        cout<<"child class show..\n";
    }
};

int main(){
    Childs child1;
    child1.show();
    return 0;
}


// 2) vitual function------------------------

#include<iostream>
using namespace std;

class Parent {
    public:

    virtual void hello(){
        cout<<"parent hello function\n";
    }
};

class Child : public Parent{
    public:

    void hello(){
        cout<<"child hello function inherited from the parent class \n";
    }
};


int main(){
    Child child1;
    Child child2(child1);
    Parent P1;
    Parent *ptr; // parent class ka ek pointer 
    ptr =&child2; // run time binding   // point towards another function of child class
    ptr-> hello();// virtual  function
    return 0;

};


