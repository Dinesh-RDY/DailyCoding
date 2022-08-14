#include <bits/stdc++.h>
using namespace std;
long long int count = 0;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void recurse(int n, vector<bool> &dp)
{
    while (n > 0 && !dp[n])
        n--;
}
int solve(int n)
{
    vector<int> v;
    int count = 0;
    unordered_map<int, int> mp;
    for (int i = 1; i < n; i++)
    {
        if (isPrime(i))
        {
            for (auto &x : v)
            {
                if (mp[i - x] && x > mp[i-x])
                    count++;
            }
            mp[i] = i;
            v.push_back(i);
        }
    }
    return count;
}
int main()
{
    cout << solve(6);
}