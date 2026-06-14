// inheritance -------------------------------------------

#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
      string name;

      void eat(){
        cout<<"eating\n";
      }

      void breathe(){
        cout<<"breathing\n";
      }
};


class Fish : public Animal{
    public:

    int fins;

    void swim(){
        cout<<"swiming\n";
    }
};




int main(){
    Fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();
    

    
    return 0;
}