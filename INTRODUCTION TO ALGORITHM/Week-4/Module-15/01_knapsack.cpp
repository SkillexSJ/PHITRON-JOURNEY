
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo = O(2^n)

int value[1005], weight[1005];

int knapsack(int index, int max_weight)
{

    if (index < 0 || max_weight <= 0) // base case jodi amar array sesh hoye jay and weught limit reach hoye jay
    {
        return 0;
    }

    if (weight[index] <= max_weight) // jodi amar bag er wieght theke array er weight kom hoy
    {
        // duita option ekhon

        int op1 = knapsack(index - 1, max_weight - weight[index]) + value[index]; // ekbar niye dekho value .. ar nile to bag er weight komte thakbe
        int op2 = knapsack(index - 1, max_weight);                                // kisui kormu na

        return max(op1, op2); // ekhon duijon theke ke beshi value dibo tare return kormu
    }

    else
    {
        // only one option ekhon

        return knapsack(index - 1, max_weight); // kisui kormu na
    }
}

int main()
{
    int n, max_weight;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cin >> max_weight;

    cout << knapsack(n - 1, max_weight); // top to bottom call with max weight

    return 0;
}
