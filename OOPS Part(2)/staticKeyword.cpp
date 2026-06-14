// static keywords---------------------------------------

#include<iostream>
using namespace std;

// for functions
// void counter(){
//     static int count = 0;
//     count++;
//     cout<<"count: "<<count<<endl;
// }

// for class
class Example{
    public:
    static int x ;

};

int Example::x = 0;





// static objects 

class hello{
    public:
    //constructor
    hello() {
        cout<<"constructor.....\n";
    }

    //destructor
    ~hello(){
        cout<<"destructor.....\n";
    }

};

int main(){
    // function calling
    // counter(); //0
    // counter(); //1
    // counter(); //2

    //class object formation
    Example eg1;
    Example eg2;
    Example eg3;

    cout<< eg1.x++ <<endl;
    cout<< eg2.x++ <<endl;
    cout<< eg3.x++ <<endl;

   
    int a =0;
    if(a == 0){
       hello  h1;
    } //constructor.....
      //destructor.....
      //code ending.....


    // int b =0;       
    // if(b == 0){
    //    static hello  h1;
    // }  //constructor.....
      //code ending.....
      //destructor.....

    cout<<"code ending.....\n";
    

    return 0;
}