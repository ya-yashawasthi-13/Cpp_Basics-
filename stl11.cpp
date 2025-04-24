// Maps ->  1 - Normal Maps, 2 - Unordered maps
// Store key value pair
#include <iostream>
#include <map>
#include <string>
using namespace std;

void printmap(map<int, string> m)
{
    cout << "Size :" << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "acb";
    m[3] = "xyz";
    m[2] = "lmn";

    m.insert(make_pair(4, "pqr"));
    // m.insert({4,"pqr"}) ;

    map<int, string>::iterator it;
    /* for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }*/

    /* for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }*/

    printmap(m);
}