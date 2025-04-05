#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor A called" << endl;
    }
    virtual ~A() {
        cout << "Destructor  A called" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor B called" << endl;
    }
    ~B() {
        cout << "Destructor  B called" << endl;
    }
};

int main() {
    A* obj = new B(); 
    delete obj;       
}