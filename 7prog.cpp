// Function Overloading
// same function name but parameter different 
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    cout << "Enter two numbers :";
    cin >> a >> b >> c ;
    int x = sum(a, b);
    int y = sum(a, b, c);
    cout << x << y << endl ;
    return 0;
}