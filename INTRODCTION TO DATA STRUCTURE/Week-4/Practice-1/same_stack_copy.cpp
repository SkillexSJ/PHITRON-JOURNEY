
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    stack<int> temp;

    while (!s1.empty())
    {
        temp.push(s1.top());
        s1.pop();
    }

    stack<int> s2;

    s2 = temp;

    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }

    return 0;
}
