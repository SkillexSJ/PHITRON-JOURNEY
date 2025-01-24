
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
    }

    else
    {
        bool hoise = true;

        while (!q.empty())
        {
            if (q.front() != s.top())
            {
                hoise = false;
                break;
            }
            q.pop();
            s.pop();
        }

        (hoise) ? cout << "YES" : cout << "NO";
    }

    return 0;
}
