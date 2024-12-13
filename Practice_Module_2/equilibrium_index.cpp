
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    int total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        total_sum += v[i];
    }

    int left_sum = 0;

    bool paisi = false;

    int val;

    for (int i = 0; i < n; i++)
    {

        int right_sum = total_sum - v[i] - left_sum;

        if (left_sum == right_sum)
        {
            paisi = true;
            val = i;
            break;
        }

        left_sum += v[i];
    }

    (paisi == true) ? cout << val : cout << -1 << endl;

    return 0;
}
