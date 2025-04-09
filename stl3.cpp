#include <iostream>
#include <vector>
using namespace std;
// by reference - copy
/* void printvec(vector<int> v)
{
    cout << "Size :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}*/

void printvec(vector<int> &v)
{
    cout << "Size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    v.push_back(5);
}

int main()
{
    vector<int> v; //(10,2);
    v.push_back(1);
    v.push_back(2);
    // v.back() = 5 ;
    // v.pop_back();

    vector<int> v1 = v; // 0(n) - becuse one by one copy elements
    v1.push_back(3);

    printvec(v);
    cout << endl;
    printvec(v);
    cout << endl;
    printvec(v1);
} 