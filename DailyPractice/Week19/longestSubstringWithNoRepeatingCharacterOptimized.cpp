#include <bits/stdc++.h>
using namespace std;
class Solution
{
    int solve(string s)
    {
        class Solution
        {
        public:
            int lengthOfLongestSubstring(string s)
            {
                if (s.length() < 2)
                    return s.length();
                int start = 0, end = 0, max_len = 1;
                int window[256]{0};
                window[s[start]] = 1;
                while (end < s.length() - 1)
                {
                    end++;
                    if (!window[s[end]])
                        window[s[end]] = 1;
                    else
                    {
                        while (window[s[end]])
                        {
                            window[s[start]] = 0;
                            start++;
                        }
                        window[s[end]] = 1;
                    }
                    max_len = max(max_len, end - start + 1);
                }
                return max_len;
            }
        };
    }
};