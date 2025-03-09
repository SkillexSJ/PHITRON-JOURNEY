#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> triangle;

        triangle.push_back({1}); // shuru hoy 1 diye

        for (int i = 1; i < numRows; i++)
        {

            vector<int> row;
            row.push_back(1); // shuru hoy 1 diye

            for (int j = 1; j < i; j++)
            {

                row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]); // ager duita value jogfol
            }

            row.push_back(1); // sesh hoy 1 diye

            triangle.push_back(row); // tarpor pattern ta add korte hobe
        }

        return triangle;
    }
};