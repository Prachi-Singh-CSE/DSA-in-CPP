// Create a User class with properties : id(private), username(public) & password(private).
//its id should be initialized in a parameterised constructor.
//it should have a Getter & Setter for password.

#include<iostream>
using namespace std;

class User{
    string id;
    string password;

    public:
    string username;

    User(string id){
        cout<<"constuctor has called"<<endl;
        this->id = id;
    }

    // Getter for id 
 
    string getId(){
        return id;
    }


    //setter for password
    void setPassword(string PassVal){
        password = PassVal;
    }
    //getter for password
    string getPassword(){
        return password;
    }

   
};

int main(){
    User u1("this is the new id ");
    
    cout<<"id by getter:"<<u1.getId()<<endl;
    u1.setPassword("@password");
    cout<<"Password by g and s: "<<u1.getPassword()<<endl;
    return 0;
}