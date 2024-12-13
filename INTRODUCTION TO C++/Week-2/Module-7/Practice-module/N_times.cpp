
#include <bits/stdc++.h>
using namespace std;

string *N_times(int n, char c)
{

    string *print = new string(n, c);

    return print;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;

        string *dhorlam = N_times(n, c);

        for (int i = 0; i < n; i++)
        {
            cout << (*dhorlam)[i] << " ";
        }

        cout << endl;

        delete dhorlam;
    }
    return 0;
}
