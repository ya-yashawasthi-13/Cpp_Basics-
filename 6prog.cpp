// Inline function
#include <iostream>
using namespace std;

inline int product(int c, int d)
{
    return c * d;
}

int current(int current, int req)
{
    int d = current * req;
    return d;
}

int main()
{
    int a = 10;
    int b = 20;


    int c = product(a, b);


    int finalCurrent = current(c, 1); 

    cout << "Final current is :" << finalCurrent << endl;
    return 0;
}