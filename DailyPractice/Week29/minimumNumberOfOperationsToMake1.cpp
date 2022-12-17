#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define rep(a, x, y) for (int a = x; a < y; a++)
#define all(p) p.begin(), p.end()
#define mod 1000000007
using namespace std;
class Solution
{
public:
    int solve(vector<string> &s)
    {
        int ans = INT_MIN;
        for (string x : s)
        {
            int sum = 0;
            for (char c : x)
            {
                if ('0' <= c and c <= '9')
                {
                    sum = sum * 10 + (c - '0');
                }
                else
                {
                    sum = x.size();
                    break;
                }
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};