
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream str(s);

    string first;

    str >> first;

    reverse(first.begin(), first.end());

    cout << first;

    while (str >> first)
    {
        reverse(first.begin(), first.end());

        cout << " " << first;
    }

    return 0;
}
