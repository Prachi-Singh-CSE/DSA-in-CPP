// Abstract class and pure virtual function----------------------------

#include<iostream>
using namespace std;

// abstract class 

class Shape{
    public:
      virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape{
    public:
       void draw(){
         cout<<"draw circle \n";
       }
};

int main(){
    Circle cir1;
    cir1.draw();

    //Shape s1;//object of abstract class type "Shape" is not allowed:
   // s1.draw();
    return 0;
}