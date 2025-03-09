
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool visited[10001];
    void bfs(int src, vector<vector<int>> &rooms)
    {

        queue<int> q;
        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {

            int p = q.front();
            q.pop();

            for (int child : rooms[p])
            {

                if (!visited[child])
                {

                    q.push(child);
                    visited[child] = true;
                }
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {

        memset(visited, false, sizeof(visited));

        bfs(0, rooms);

        for (int i = 0; i < rooms.size(); i++)
        {

            if (!visited[i])
                return false;
        }

        return true;
    }
};
int main()
{

    return 0;
}
