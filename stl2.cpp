// vector are dynamic array
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printvec(vector<int> v)
{
    cout << "Size of vector is : " << v.size() << endl;
    cout << "Capacity of vector is : " << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printvec(v);
        v.push_back(x); // 0(1)
    }

    printvec(v);
}