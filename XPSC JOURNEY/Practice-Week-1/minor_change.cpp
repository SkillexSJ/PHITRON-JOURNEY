
#include <bits/stdc++.h>
using namespace std;

//https://atcoder.jp/contests/abc172/submissions/64175522

int main()
{
    string s, t;
    cin >> s >> t;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
