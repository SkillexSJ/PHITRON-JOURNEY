
#include <bits/stdc++.h>
using namespace std;

class Myqueue
{
public:
    list<int> l;
    int sz;

    void push(int val)
    {
        sz++;
        l.push_back(val);
    }

    void pop()
    {
        sz--;
        l.pop_front();
    }

    int front()
    {

        return l.front();
    }

    int size()
    {

        return sz;
    }

    bool empty()
    {

        return l.empty();
    }

    int back()
    {

        return l.back();
    }
};

int main()
{

    Myqueue q;

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // if (!q.empty()) // eitao stack er moto check kore nibo
    // {
    //     q.push(60);
    // }
    // if (!q.empty())
    // {
    //     q.pop();
    // }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
