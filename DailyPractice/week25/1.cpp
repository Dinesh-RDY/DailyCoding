#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<string>> mostPopularCreator(vector<string> &creators, vector<string> &ids, vector<int> &views)
    {
        unordered_map<string, tuple<int, int, string>> mp;
        int n = creators.size();
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(creators[i]) == mp.end())
                mp.insert({creators[i], make_tuple(views[i], views[i], ids[i])});
            else
            {
                auto &x = mp[creators[i]];
                get<0>(x) = get<0>(x) + views[i];
                cout << get<0>(x) <<  get<1>(x) <<  get<2>(x)<< endl;
                if (get<1>(x) < views[i])
                {
                    get<1>(x) = views[i];
                    get<2>(x) = ids[i];
                }
                else if (get<1>(x) == views[i])
                {
                    get<2>(x) = min(ids[i], get<2>(x));
                }
            }
            maxi = max(maxi, get<0>(mp[creators[i]]));
        }
        vector<vector<string>> ans;
        for (auto &it : mp)
        {
            cout << maxi << " " << get<0>(it.second) << " " << it.first << endl;
            if (maxi == get<0>(it.second))
            {
                ans.push_back({it.first, get<2>(it.second)});
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<string> a{"alice", "bob", "alice", "chris"};
    vector<string> b{"one", "two", "three", "four"};
    vector<int> c{5, 10, 5, 4};
    s.mostPopularCreator(a, b, c);
}