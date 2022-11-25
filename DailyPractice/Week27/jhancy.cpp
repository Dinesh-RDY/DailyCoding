#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        unordered_map<char, int> mpp, spp;
        int j = p.length(), having = 0, need = p.length();
        for (char &c : p)
            mpp[c]++;
        for (int i = 0; i < p.length(); i++)
        {
            spp[s[i]]++;
            if (spp[s[i]] <= mpp[s[i]])
            {
                having++;
            }
        }
        vector<int> ans;
        int i = 0;
        while (j <= s.length())
        {
            if (having == need)
            {
                ans.push_back(j - p.length());
            }
            if (mpp[s[i]] && spp[s[i]] <= mpp[s[i]])
            {
                having--;
            }
            spp[s[i]]--;
            i++;
            if (mpp[s[j]] && spp[s[j]] < mpp[s[j]])
            {
                having++;
            }
            spp[s[j]]++;
            j++;
        }
        return ans;
    }
    int func(string s)
    {
        vector<int> ans = findAnagrams(s, "programmer");
        int a = max(ans[0], ans[1]);
        int b = min(ans[0], ans[1]);
        int index1 = b + 10;
        return a - index1;
    }
};
int main()
{
    cout << Solution().func("programmerxxxprogrammer");
}