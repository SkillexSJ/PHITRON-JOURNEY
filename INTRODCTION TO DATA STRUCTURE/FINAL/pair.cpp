#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> pairs;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s;
        cin >> x;
        pairs.push_back(make_pair(s, x));
    }

    sort(pairs.begin(), pairs.end(), comp);

    for (auto i : pairs)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}