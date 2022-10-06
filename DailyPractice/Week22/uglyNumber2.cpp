#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nthUglyNumber(int n)
    {
        if (n <= 6)
            return n;
        priority_queue<int, vector<int>, greater<int>> pq;
        int x;
        pq.push(1);
        for (int i = 0; i < n; i++)
        {
            x = pq.top();
            while (!pq.empty() && pq.top() == x)
                pq.pop();
            if (x <= INT_MAX / 2)
                pq.push(x * 2);
            if (x <= INT_MAX / 3)
                pq.push(x * 3);
            if (x <= INT_MAX / 5)
                pq.push(x * 5);
        }
        return x;
    }
    // Fast Solution 
    int nthUglyNumberDP(int n){
        if(n <= 6)
            return n;
        int dp[n] , p1 = 0 , p2 = 0 , p3 = 0;
        dp[0] = 1;
        for (int i = 1; i < n; i ++){
            int a = dp[p1] * 2, b = dp[p2] * 3, c = dp[p3] * 5;
            int temp = a > b ? b > c ? c : b : a > c ? c : a;
            dp[i] = temp;
            if(a == dp[i])
                p1++;
            if(b == dp[i])
                p2++;
            if(c == dp[i])
                p3++;
        }
        return dp[n - 1];
    }
};