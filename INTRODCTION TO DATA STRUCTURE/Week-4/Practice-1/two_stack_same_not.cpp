
#include <bits/stdc++.h>
using namespace std;

class Mystack
{

public:
    vector<int> v;

    void push(int val)
    {

        v.push_back(val);
    }
    void pop()
    {

        v.pop_back();
    }

    int top()
    {

        return v.back();
    }

    int size()
    {

        return v.size();
    }

    bool empty()
    {

        return v.empty();
    }
};

int main()
{
    Mystack s1;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s1.push(val);
    }

    Mystack s2;
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        s2.push(val);
    }

    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
    }

    else
    {
        bool hoise = true;
        while (!s1.empty())
        {
            // int val1 = s1.top();
            // int val2 = s2.top();

            if (s1.top() != s2.top())
            {
                hoise = false;
                break;
            }
            s1.pop();
            s2.pop();
        }
        (hoise) ? cout << "YES" : cout << "NO";
    }

    return 0;
}
