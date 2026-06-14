// practice problems ----------------------------------------------------------------------

// question 1 ----------------------------------------------------------------------


#include<iostream>
using namespace std;



class A {
public:
    A() {
        std::cout << "Constructor A" << std::endl;
    }

    ~A() {
        std::cout << "Destructor A" << std::endl;
    }
};

class B : public A { // if child inherit parent class then obj of child class also calls first to parent class constructor and oppostie sequence with destructor
public:
    B() {
        std::cout << "Constructor B" << std::endl;
    }

    ~B() {
        std::cout << "Destructor B" << std::endl;
    }
};

int main() {
    B obj;
    return 0;
}
//output
// Constructor A
// Constructor B
// Destructor B
// Destructor A



// question 2 ---------------------------------------------------------------------


#include<iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        std::cout << "Base" << std::endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived" << std::endl;
    }
};

int main() {
    Base* b = new Derived();

    b->print();

    delete b;
    return 0;
}
