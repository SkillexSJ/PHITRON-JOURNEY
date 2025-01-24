#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> s;
    queue<int> q2;

    while (k--)
    {

        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {

        q2.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {

        q2.push(q.front());
        q.pop();
    }

    q = q2;

    return q;
}
