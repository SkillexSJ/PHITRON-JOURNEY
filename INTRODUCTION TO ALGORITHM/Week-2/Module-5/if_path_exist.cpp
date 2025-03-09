#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> adj_list[200000];
    bool visited[2000005];

    void dfs(int s)
    {

        visited[s] = true;

        for (auto child : adj_list[s])
        {

            if (visited[child] == false)
            {
                dfs(child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source,
                   int destination)
    {

        memset(visited, false, sizeof(visited));

        for (int i = 0; i < edges.size(); i++)
        {

            int a = edges[i][0];
            int b = edges[i][1];

            adj_list[a].push_back(b);
            adj_list[b].push_back(a);
        }

        dfs(source);

        return visited[destination] == true;
    }
};