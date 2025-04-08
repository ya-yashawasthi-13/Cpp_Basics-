// OOPs - classes and objects
// cpp - initially called - c with classes - by stroustoup
// class - extension of structure(in c)
// structurs had limitations -
//             - members are public
//             - no methods
// classes - structures + more
// classes - can have methods and properties
// classes - can have private and public members
// structures in cpp are typedefed
// you can declare object along with class declaration like -
/*     class Employee{
// class definition
}harry,Yash ;
*/

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void getdata(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::getdata(void)
{
    cout << "Enter binary :";
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Binary are : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary yash;
    yash.getdata();
    yash.chk_bin();
    yash.display();
    yash.ones_compliment();
    yash.display();
    return 0;
}
