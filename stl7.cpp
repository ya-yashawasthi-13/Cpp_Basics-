// rows dynamic - vector of vector
#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int> v)
{
    cout << "Size :" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int> > v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(33);
    v.push_back(vector<int>());
    for (int i = 0; i < v.size(); i++)
    {
        printvec(v[i]);
    }
    cout << v[0][1];
    return 0;
}
