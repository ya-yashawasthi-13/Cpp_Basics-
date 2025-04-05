#include <iostream>
using namespace std;

class rectangle
{
public:
    rectangle(int a, int b)
    {
        int c = a * b;
        cout << "area is :" << c << endl;
    }
};
class circle
{
    public :
    circle(int radius)
    {
        int d = 3.14 * radius * radius;
        cout << "Area of circle is :" << d << endl;
    }
};

int main()
{
    rectangle(10, 20);
    circle(10);
    return 0;
}