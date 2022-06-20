#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
void recurse(int s, vector<int> adj[], bool visited[])
{
    if (visited[s])
        return;
    ans.push_back(s);
    visited[s] = true;
    for (auto v : adj[s])
    {
        if (!visited[v])
        {
            recurse(v, adj, visited);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    bool visited[V] = {0};
    recurse(0, adj, visited);
    return ans;
}