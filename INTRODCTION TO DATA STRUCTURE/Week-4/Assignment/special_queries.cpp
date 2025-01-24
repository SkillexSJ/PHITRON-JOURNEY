
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> customer;

    while (q--)
    {
        int val;
        cin >> val;

        if (val == 0)
        {
            string name;
            cin >> name;
            customer.push(name);
        }

        if (val == 1)
        {
            if (!customer.empty())
            {
                cout << customer.front();
                customer.pop();
            }

            else
            {
                cout << "Invalid";
            }
        }
        cout << endl;
    }

    return 0;
}
