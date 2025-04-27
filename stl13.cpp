// removing the value part of map and only key part is set
// Set -> 1 - Normal set 2 - Unordered set 3 - Multiset
// print in sorted order
// store unique elements

#include <iostream>
#include <set>
#include <string>
using namespace std;

void printset(set<string> &s)
{
    cout << "Size : " << s.size() << endl;
    for (string value : s)
    {
        cout << value << " ";
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    set<string> s;
    s.insert("abc"); // log(n)
    s.insert("xyz");
    s.insert("pqr");
    auto it = s.find("abc");
    if (it != s.end())
    {
        cout << "Found" << endl;
        // s.erase(it) ;
    }
    else
    {
        cout << " Not Found" << endl;
    }
    printset(s);
}