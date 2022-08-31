#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
    int min_len = INT_MAX;
    int solve(string s)
    {
        string pattern1 = "AB", pattern2 = "BB";
        if (s == "")
        {
            min_len = 0;
            return 0;
        }
        int k1 = 0, k2 = 0;
        int n = s.length();
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == pattern1[0] && s[i + 1] == pattern1[1])
            {
                solve(s.substr(0, i) + s.substr(i + 2));
            }
            if (s[i] == pattern2[0] && s[i + 1] == pattern2[1])
            {
                solve(s.substr(0, i) + s.substr(i + 2));
            }
        }
        min_len = min(min_len, n);
        return min_len;
    }


int main()
{

    string s1;
    // cin >> s1;
    cout << solve("BABBABCGFDJSA");
}