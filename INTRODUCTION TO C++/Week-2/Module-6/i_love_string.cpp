
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ipAsu ccsit";
    string t = "ey gpt";

    int n = max(s.size(), t.size());

    string notun;

    for (int i = 0; i < n; i++)
    {
        notun += s;
        notun += t;
    }

    cout << notun;

    return 0;
}
