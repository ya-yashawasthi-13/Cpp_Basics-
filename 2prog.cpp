// default constructor
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "constructor called" << endl;
    }
    void display()
    {
        int a = 10, b = 20;
        cout << "a : " << a <<"\n"<< "b : " << b << endl;
    }
};

int main()
{
    A obj;
    obj.display();
    return 0;
}
