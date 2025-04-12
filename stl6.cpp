// array of vectors
// array making using vectors

/* #include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v[N]; // array of vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
    }
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int> v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int N;
    cout << "Enter no. of vectors:";
    cin >> N;
    vector<int> v[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter no. of elements in vector " << i + 1 << ":";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "Enter element " << j + 1 << ":";
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printvec(v[i]);
        cout << endl;
    }
    return 0;
}
