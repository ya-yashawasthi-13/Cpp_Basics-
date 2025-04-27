// unodered set or unordered map hash map is used
// use only basic data type  

/* Given N strings and Q queries . In each query you are Given a string print yes if string is present
 else print no
 N <= 10^6
 |S| <= 100
 Q <= 10^6
   */

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    unordered_set<string> s; //0(1)
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str;
        cin >> str;
        if (s.find(str) == s.end)
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
}