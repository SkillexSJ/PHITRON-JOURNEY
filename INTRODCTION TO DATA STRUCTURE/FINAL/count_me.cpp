
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> name;
        int count = 0;
        string max;
        while (ss >> word)
        {
            name[word]++;
            if (name[word] > count)
            {
                count = name[word];
                max = word;
            }
        }

        cout << max << " " << count << endl;
    }
    return 0;
}
