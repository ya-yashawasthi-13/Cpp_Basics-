#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    vector<pair<int, int> > v_p;
    v_p = {{1, 2}, {3, 4}, {5, 6}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    // copy value - reference - original value
    for (int &value : v)
    {
        value++;
        cout << value << " ";
    }
    cout << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
} 

// using auto keyword in loop
/* #include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    vector<pair<int, int> > v_p;
    v_p = {{1, 2}, {3, 4}, {5, 6}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    // copy value - reference - original value
    for (auto &value : v)
    {
        value++;
        cout << value << " ";
    }
    cout << endl;
    for (auto value : v)
    {
        cout << value << " ";
    }
}*/