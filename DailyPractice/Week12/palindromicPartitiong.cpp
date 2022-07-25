#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s)
    {
        // Same code as that of longest palindromic Substring
        vector<vector<int>> dp(s.length(), vector<int>(s.length(), 0));
        for (int i = 0; i < s.length(); i++)
        {
            dp[i][i] = 1;
        }
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
                dp[i][i + 1] = 1;
        }
        for (int k = 3; k <= s.length(); k++)
        {
            for (int i = 0; i < s.length() - k + 1; i++)
            {
                int j = i + k - 1;
                if (s[i] == s[j] && dp[i + 1][j - 1])
                    dp[i][j] = 1;
            }
        }

        vector<string> path;
        func(0, s, path, dp);
        return ans;
    }
    void func(int index, string s, vector<string> &path, vector<vector<int>> &dp)
    {
        if (index == s.length())
        {
            ans.push_back(path);
        }
        for (int i = index; i < s.length(); i++)
        {
            if (dp[index][i])
            {
                path.push_back(s.substr(index, i - index + 1));
                func(i + 1, s, path, dp);
                path.pop_back();
            }
        }
    }
};