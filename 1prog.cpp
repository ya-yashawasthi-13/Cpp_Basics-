#include <iostream>
using namespace std;

class A
{
public:
    A(int a)
    {
        cout << "A constructor called " << a << endl;
    }
};

class B : public A
{
public:
    B(int b) : A(b)
    {
        cout << "B constructor called " << b << endl;
    }
};

int main()
{
    B obj(10);
    return 0;
}