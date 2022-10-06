#include <bits/stdc++.h>
using namespace std;
#define pvi pair <double, vector<int>>
class comp{
    bool operator() (pvi &a, pvi & b){
        return a.first > b.first;
    }  
};
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        priority_queue<pvi, vector<pvi>, comp> pq;
        for (auto &v : points){
            pq.push(make_pair(sqrt(v[0] * v[0] + v[1] * v[1]), v));
            if(pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> v;
        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};