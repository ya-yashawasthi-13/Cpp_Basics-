#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<pair<int, int> > v;
    v = {{1, 2}, {2, 3}, {3, 4}};

    vector<pair<int, int> >::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (it->first) << " " << (it->second) << endl;
    }
    return 0;
}
