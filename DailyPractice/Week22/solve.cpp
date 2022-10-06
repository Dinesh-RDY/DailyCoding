#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
class Solution
{
    ll maxSubArraySum(vector<ll> a)
    {
        int size = a.size();
        ll max_so_far = INT_MIN, max_ending_here = 0;

        for (int i = 0; i < size; i++)
        {
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;

            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }

public:
    void solve()
    {
        int n, m;
        cin >> n;
        vector<ll> a1(n);
        for (int i = 0; i < n;i++)
            cin >> a1[i];
        cin >> m;
        ll sum = 0;
        for (int i = 0; i < m; i++){
            int temp;
            cin >> temp;
            if(temp > 0)
                sum += temp;
        }
        a1.push_back(sum);
        ll a = maxSubArraySum(a1);
        a1.pop_back();
        a1.insert(a1.begin(), sum);
        ll b = maxSubArraySum(a1);
        a > b ? cout <<  a : cout <<  b;
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
    int t;
    cin >> t;
    while (t--)
    {
        s.solve();
        cout << '\n';
    }
}