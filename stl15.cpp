// multiset duplicates allowed
//  if you pass iterator  value at that iterator is erased
//  if value passed all the values id=s deleted

#include <iostream>
#include <set>
#include <string>
using namespace std;

void print(multiset<string> &s)
{
    for (auto value : s)
    {
        cout << value << " ";
    }
}

int main()
{

    multiset<string> s;
    s.insert("abc"); // o log(n)
    s.insert("pqr");
    s.insert("xyz");
    s.insert("abc");

    auto it = s.find("abc");
    if (it != s.end())
    {
        s.erase(it); // delete "abc" at it
    }

    // s.erase("abc");  // delete all abc
    print(s);
    return 0;
}