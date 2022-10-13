#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
// Try this 
class Solution
{
public:
    // There are only two cases one where we select all numbers less than 
    // max value  in array 
    // the second case is where we add the number 2 * n first
    // then add the other numbers 
    void solve1(){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vi missing;
        sort(arr, arr + n);
        int now = 0;
        for (int i = 1; i <= 2 * n; i++){
            if(arr[now] == i)
                now++;
            else
                missing.pb(i);
        }
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < k; i++)
            ans1 += max(0, arr[n-1] - missing[i]);
        for (int i = 0; i < k - 1; i++)
            ans2 += max(0, 2 * n - missing[i]);
        cout << max(ans1, ans2);
    }

    void solve()
    {
        int n, k;
        cin >> n >> k;
        unordered_set<int> ht;
        int max_ele = -1, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            ht.insert(temp);
            max_ele = max(max_ele, temp);
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        int sum = 0;
        for (int i = 1; i <= 2 * n; i++)
        {
            if (ht.find(i) == ht.end())
                pq.push(i);
        }
        for (int i = 0; i < k; i++)
        {
            temp = pq.top();
            if(temp > max_ele){
                temp = 2 * n;
            }else{
                pq.pop();
            }
            max_ele = max(max_ele, temp);
            sum += (max_ele - temp);
        }
        cout << sum;
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
        s.solve1();
        cout << '\n';
    }
}