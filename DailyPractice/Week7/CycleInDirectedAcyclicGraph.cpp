#include <bits/stdc++.h>
using namespace std;

bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int indegree[V] = {0};
    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
            indegree[it]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }
    int count = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (auto it : adj[x])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
        count++;
    }
    return count != V;
}