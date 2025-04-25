// Dequeue deletion
/* #include <deque>
#include <iostream>
using namespace std;

void eraseAt(deque<int> &d, int x)
{
    deque<int>::iterator itr;
    itr = d.begin() + x;
    d.erase(itr);
}

void eraseInRange(deque<int> &d, int start, int end)
{
    deque<int>::iterator itr1, itr2;
    itr1 = d.begin() + start;
    itr2 = d.begin() + end;
    d.erase(itr1, itr2);
}

void eraseAll(deque<int> &d)
{
    d.clear();
}

int main()
{
    deque<int> d = {1, 2, 4, 5, 6};

    eraseInRange(d, 1, 2);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}*/


//  insertion and deletion in queue
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> fillQ(const vector<int> &v)
{
    int n = v.size();
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(v[i]);
    }
    return q;
}

void emptyQ(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    queue<int> q;
    q = fillQ(arr);
    emptyQ(q);

    return 0;
}