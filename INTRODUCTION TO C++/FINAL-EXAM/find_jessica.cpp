
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    string khujo;

    bool paisi = false;

    while (ss >> khujo)
    {
        if (khujo == "Jessica")
        {
            paisi = true;
        }
    }

    (paisi) ? cout << "YES" : cout << "NO" << endl;

    return 0;
}
