#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    m["abc"] = 1;
    m["xyz"] = 2;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}