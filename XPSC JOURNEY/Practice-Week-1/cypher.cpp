
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59506750

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<pair<int, int>> moves(n);

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;

            int count = 0;

            for (int i = 1; i <= b; i++)
            {
                char move;
                cin >> move;

                if (move == 'U')
                {
                    count++;
                }
                else if (move == 'D')
                {
                    count--;
                }
            }

            moves[i] = {count, arr[i]};
        }

        for (int i = 0; i < n; i++)
        {

            arr[i] = (arr[i] - moves[i].second + 10) % 10;
        }

        for (int num : arr)
        {
            cout << num << " ";
        }
    }

    return 0;
}
