
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59737334

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    bool sareja_turn = true;

    int sareja_score = 0, dima_score = 0;

    while (left <= right)
    {

        if (a[left] > a[right])
        {
            if (sareja_turn)
            {
                sareja_score += a[left];
            }
            else
            {
                dima_score += a[left];
            }
            left++;
        }
        else
        {

            if (sareja_turn)
            {
                sareja_score += a[right];
            }
            else
            {
                dima_score += a[right];
            }
            right--;
        }

        sareja_turn = !sareja_turn;
    }

    cout << sareja_score << " " << dima_score << endl;
    return 0;
}
