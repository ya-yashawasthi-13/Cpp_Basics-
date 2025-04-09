#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printvec(vector<pair<int, int>> v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

// nested vwctor with pair
int main()
{
    vector<pair<int, int>> v; //  manual initialise  {{1, 2}, {2, 3}, {3, 4}};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    /*for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }*/

    printvec(v);
}