#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


class Car{
   

public:
     string name;
     string color;
    
     int *mileage;
    
    Car(string nameValue , string colorValue){
        cout<<"constructor is called . object being created...\n";
        name = nameValue;
        color = colorValue;
        mileage = new int; // dynamic allocation
        *mileage = 12;
    }

    //getters

    string getName(){
        return name;
       
    }

    string getColor(){
        return color;
    }

    void start(){
        cout<<"car has started......\n";
    }
    void stop(){
        cout<<"car has stoped.......\n";
    }
    //Custom Copy constructor

    Car(Car &original){
        cout<<"copying original to new\n";
        name = original.name;
        color = original.color;
        mileage = original.mileage; // shallow copy 
        // mileage = new int; // deep
        //*mileage = *original.mileage; // deep copy 
    }



    // custom destructor 
    
    ~Car(){
        cout<<"deleting memory........."; // it calls in the last , after full exicution of code
        if(mileage!= nullptr){
            delete mileage ;
            mileage = nullptr ;
        }
    }

};

int main(){
    Car c1("fortuner","white");
    // cout<<"car name:"<<c1.getName()<<endl;
    // cout<<"car color: "<<c1.getColor()<<endl;
    // Car c2(c1);

    // cout<<*c2.mileage<<endl;
    // *c2.mileage = 10;
    // cout<<*c1.mileage<<endl;

    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;

    return 0;
}