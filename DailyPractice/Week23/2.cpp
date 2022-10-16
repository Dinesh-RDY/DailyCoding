#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
class Solution
{
public:
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<int> arr(n);
        arr[0] = 1;
        for (int i = 1; i < n; i++)
        {
            arr[i] = ((arr[i - 1] % mod) * 2) % mod;
        }
        for(auto i : arr){
            cout << i << " ";
        }
        for (int i = 1; i < n; i++)
        {
            arr[i] = ((arr[i - 1] % mod) * (arr[i] % mod)) % mod;
        }
        for(auto i : arr){
            cout << i << " ";
        }
        vector<int> ans;
        for (auto &query : queries)
        {
            int l = query[0], r = query[1];
            if (l == 0)
                ans.push_back(arr[r]);
            else if (l == r)
            {
                ans.push_back(arr[r] % arr[r - 1]);
            }
            else
            {
                ans.push_back(arr[r] % arr[l]);
            }
        }
        return ans;
    }
};