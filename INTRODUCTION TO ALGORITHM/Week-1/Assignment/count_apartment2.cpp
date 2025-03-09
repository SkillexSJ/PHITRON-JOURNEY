#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> direction = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m;

vector<int> nodes;

bool valid(int ci, int cj)
{

    if (ci < 0 || ci >= n || cj < 0 || cj >= m || grid[ci][cj] == '#')
        return false;

    return true;
}

int counter;

void dfs(int si, int sj)
{
    counter++;
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if (valid(ci, cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> grid[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (visited[i][j] == false)
            {
                if (grid[i][j] == '.')
                {
                    counter = 0;
                    dfs(i, j);
                    nodes.push_back(counter);
                }
            }
        }
    }

    if (nodes.empty())
        cout << 0 << endl;

    else
    {

        sort(nodes.begin(), nodes.end());

        for (int i : nodes)
        {

            cout << i << " ";
        }
    }
    return 0;
}