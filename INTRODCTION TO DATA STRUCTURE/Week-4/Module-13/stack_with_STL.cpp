
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    cout << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    cout << st.size() << endl;

    return 0;
}
