
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100001];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool hoise = false;

        if (a == b)
            hoise = true;
        else
        {
            for (int khujo : adj_list[a])
            {

                if (khujo == b)
                {
                    hoise = true;
                    break;
                }
            }
        }

        (hoise) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
