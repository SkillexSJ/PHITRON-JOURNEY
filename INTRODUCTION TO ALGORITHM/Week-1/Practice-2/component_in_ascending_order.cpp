
#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[10001];
bool visited[10001];
vector<int> component;
int counter;
void bfs(int src, int &counter)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();

        counter++;

        for (int child : adj_list[p])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < n; i++)
    {
        counter = 0;
        if (!visited[i])
        {

            bfs(i, counter);
            component.push_back(counter);
        }
    }

    sort(component.begin(), component.end());

    for (auto i = component.begin(); i != component.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
