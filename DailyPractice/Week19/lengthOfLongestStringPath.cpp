#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthLongestPath(string input)
    {
        stringstream ss(input);
        string data;
        unordered_map<int, int> len;
        int ans = 0;
        while (getline(ss, data, '\n'))
        {
            int tab = 0;
            for (char c : data)
            {
                if (c == '\t')
                    tab++;
            }
            if (tab == 0)
            {
                len[tab] = data.size();
            }
            else
            {
                len[tab] = len[tab - 1] + 1 + data.substr(tab).size();
            }
            if (data.find('.') != string::npos)
            {
                ans = max(ans, len[tab]);
            }
        }
        return ans;
    }
};