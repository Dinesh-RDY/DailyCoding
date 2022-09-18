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
public:
    char solve(string s, string t)
    {
        int arr[26];
        int n = t.length();
        for (int i = 0; i < s.length(); i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']++;
        }
        arr[t[n - 1] - 'a']++;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i])
                return 'a' + i;
        }
        return ' ';
    }
};

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Solution s;
}