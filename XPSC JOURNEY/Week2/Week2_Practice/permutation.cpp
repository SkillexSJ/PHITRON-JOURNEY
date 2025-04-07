
#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/solution/59747387

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> nums(n, vector<int>(n - 1));

        map<int, int> first;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> nums[i][j];
            }

            first[nums[i][0]]++;
        }

        int p1 = -1;

        for (auto &it : first)
        {
            if (it.second == n - 1)
            {
                p1 = it.first;
                break;
            }
        }

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {

            bool flag = false;
            for (auto num : nums[i])
            {
                if (num == p1)
                {

                    flag = true;
                    break;
                }
            }

            if (flag == false)
            {
                ans = nums[i];
                break;
            }
        }

        cout << p1 << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
