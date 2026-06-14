#include<iostream>
using namespace std;

class Student{
    // properties
    string name;
    
    public:
    float cgpa;
    
    // methods /functions 
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }
    

    // setters
    void setName(string nameVal){
        name = nameVal;
    }

    //Getters
    string getName(){
        return name;
    }
};

int main(){
    Student s1; // object
    s1.cgpa = 10.0;
    cout<<s1.cgpa<<endl;


    // getters and setters calling
    s1.setName("prachi singh");
    cout<<s1.getName()<<endl;
    
    return 0;
};





