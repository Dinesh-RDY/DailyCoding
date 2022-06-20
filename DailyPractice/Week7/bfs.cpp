#include <vector>
#include <queue>
using namespace std;
vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    queue<int> q;
    vector<int> ans;
    q.push(0);
    bool visited[V] = {0};
    visited[0] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        ans.push_back(x);
        for (auto v : adj[x])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return ans;
}