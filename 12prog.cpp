// Ambiguity in Inheritance
#include <iostream>
using namespace std;

class Base1
{
public:
    void display()
    {
        cout << "Base1 display" << endl;
    }
};

class Base2
{
public:
    void display()
    {
        cout << "Base2 dispaly" << endl;
    }
};

class Derived : public Base1, Base2
{
public:
    void display()
    {
        cout << "Derived display" << endl;
    }
};

int main()
{
    Derived d;
    d.display::Base1();
    d.display::Base2();
    d.display();
    return 0;
}