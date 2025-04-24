// Maps ->  1 - Normal Maps, 2 - Unordered maps
// Store key value pair
#include <iostream>
#include <map>
#include <string>
using namespace std;

void printmap(map<int, string> &m)
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
    m[1] = "acb"; // 0 log(n)
    m[3] = "xyz";
    m[2] = "lmn";

    m.insert(make_pair(4, "pqr"));
    // m.insert({4,"pqr"}) ;

    // map<int, string>::iterator it;
    /* for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }*/

    /* for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }*/

    auto it = m.find(3); // o(log(n))
    // m.erase(2) ;
    m.erase(it);
    // m.clear();
    /* if (it == m.end())
    {
        cout << "no value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }*/

    printmap(m);
}

/* map<string, string> m;
 m[1] = "acb"; // 0 log(n)
 m[3] = "xyz";
 m[2] = "lmn";

m["abc"] = "abc"; // s.size * log(n)

m.insert(make_pair(4, "pqr"));
m.insert({4,"pqr"}) ;*/
