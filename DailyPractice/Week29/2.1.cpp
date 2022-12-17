class Solution {
public:
    int maxStarSum(vector<int>& v, vector<vector<int>>& e, int k) {
        if(k == 0) return *max_element(v.begin() , v.end());
        vector<vector<int>> adj(v.size());
        for (vector<int> &edge : e)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            priority_queue<pair<int, int>> pq;
            bool visited[v.size()];
            int temp = k, sum = v[i], x = i;
            for (int e : adj[i])
            {
                pq.push({v[e], e});
            }
            visited[i] = true;
            ans = max(ans , v[i]);
            while (temp && !pq.empty())
            {    
                auto t = pq.top();
                pq.pop();
                sum += t.first;
                x = t.second;
                ans = max(ans, sum);
                temp--;
                for (int e : adj[x])
                {
                    if(!visited[e])
                        pq.push({v[e], e});
                }
                visited[x] = true;
            }
        }
        return ans == INT_MIN ? -1 : ans;
    }
};