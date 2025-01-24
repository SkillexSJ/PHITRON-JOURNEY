
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val;

    v.push_back(val);

    int cur_idx = v.size() - 1;

    while (cur_idx != 0) // emon hote pare ekdom shuru te giye thamse tokhn ei condition na dile abar inifite hoye jabe
    {
        int parent_idx = (cur_idx - 1) / 2; // parent ber korar formula

        if (v[parent_idx] > v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]); // je choto shey age chole jabe
        }
        else
        {
            break; // jkhon dekhbo amar parent ekhon thikhtak ache tokhon amar loop break korbe
        }

        cur_idx = parent_idx; // ekdom parent index update korbe
    }

    for (int num : v)
    {

        cout << num << " ";
    }

    return 0;
}
