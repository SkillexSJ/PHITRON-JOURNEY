
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59746351

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int player1 = 0, player2 = 0, player3 = 0;

        map<string, int> mp1;
        map<string, int> mp2;
        map<string, int> mp3;

        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            mp1[s1]++;
        }

        for (int i = 0; i < n; i++)
        {
            string s2;
            cin >> s2;
            mp2[s2]++;
        }

        for (int i = 0; i < n; i++)
        {
            string s3;
            cin >> s3;
            mp3[s3]++;
        }

        map<string, int> total;

        for (auto it : mp1)
        {
            total[it.first]++;
        }

        for (auto it : mp2)
        {
            total[it.first]++;
        }

        for (auto it : mp3)
        {
            total[it.first]++;
        }

        for (auto it : total)
        {

            string word = it.first;
            int count = it.second;

            if (count == 1)
            {

                if (mp1[word])
                    player1 += 3;
                if (mp2[word])
                    player2 += 3;
                if (mp3[word])
                    player3 += 3;
            }

            else if (count == 2)
            {
                if (mp1[word])
                    player1 += 1;
                if (mp2[word])
                    player2 += 1;
                if (mp3[word])
                    player3 += 1;
            }
        }

        cout << player1 << " " << player2 << " " << player3 << endl;
    }

    return 0;
}
