
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << q.size() << endl;

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

    cout << q.size() << endl;

    return 0;
}
