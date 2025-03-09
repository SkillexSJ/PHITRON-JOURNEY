
#include <bits/stdc++.h>
using namespace std;

// eitar TC holo = O(NW) N = number of nodes, W = weight

int value[1005], weight[1005];
int dp[1005][1005]; // 2d nilam karon index ar weight niye kaj korchi

int knapsack(int index, int max_weight)
{

    if (index < 0 || max_weight <= 0) // base case jodi amar array sesh hoye jay and weught limit reach hoye jay
    {
        return 0;
    }

    if (dp[index][max_weight] != -1) // oije fibonacci r moto ekta value paiya gele ar call korar ki dorkar
    {
        return dp[index][max_weight];
    }

    if (weight[index] <= max_weight) // jodi amar bag er wieght theke array er weight kom hoy
    {
        // duita option ekhon

        int op1 = knapsack(index - 1, max_weight - weight[index]) + value[index]; // ekbar niye dekho value .. ar nile to bag er weight komte thakbe
        int op2 = knapsack(index - 1, max_weight);                                // kisui kormu na

        dp[index][max_weight] = max(op1, op2); // ekhon duijon theke ke beshi value dibo tare dp te rakhbo

        return dp[index][max_weight];
    }

    else
    {
        // only one option ekhon

        dp[index][max_weight] = knapsack(index - 1, max_weight); // kisui kormu na

        return dp[index][max_weight];
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

    for (int i = 0; i <= n; i++) // dp initialization
    {
        for (int j = 0; j <= max_weight; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n - 1, max_weight); // top to bottom call with max weight

    return 0;
}
