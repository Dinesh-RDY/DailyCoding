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
};