#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string largestPalindromic(string num)
    {
        int arr[10]{0};

        for (int k = 0; k < num.size(); k++)
        {
            arr[num[k] - '0']++;
        }
        int n = num.size();
        string ans = "";
        for (int i = 9; i >= 0; i--)
        {
            if (i == 0 && ans.size() == 0)
                break;
            while (arr[i] >= 2)
            {
                ans.push_back(i + 48);
                arr[i] -= 2;
            }
        }
        bool flag = false;
        for (int i = 9; i >= 0; i--)
        {
            if (arr[i])
            {
                ans.push_back(i + 48);
                flag = true;
                break;
            }
        }
        n = ans.size();
        for (int i = flag ? n - 2 : n - 1; i >= 0; i--)
        {
            ans.push_back(ans[i]);
        }
        return ans;
    }
};