
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59787722

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string password;
        cin >> password;

        int best_time = -1;
        int best_index = 0;
        char best_char = 'a';

        for (int i = 0; i <= password.size(); i++)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {

                string sub = password.substr(0, i) + c + password.substr(i);
                int time = 2;

                for (int i = 1; i <= sub.size(); i++)
                {

                    if (sub[i] == sub[i - 1])
                    {
                        time += 2;
                    }

                    else
                    {
                        time += 1;
                    }
                }

                if (time > best_time)
                {
                    best_time = time;
                    best_index = i;
                    best_char = c;
                }
            }
        }

        cout << password.substr(0, best_index) << best_char << password.substr(best_index) << endl;
    }
    return 0;
}