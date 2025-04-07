// Basic class and object use
#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1);
    void getdata();
};

void Employee ::setdata(int a1, int b1, int c1) // scope resolution operator use 
{
    a = a1;
    b = b1;
    c = c1;
}

void Employee ::getdata()
{
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
}

int main()
{
    Employee yash;
    yash.d = 40;
    yash.e = 50;
    yash.setdata(10, 20, 30);
    yash.getdata();
    return 0;
}