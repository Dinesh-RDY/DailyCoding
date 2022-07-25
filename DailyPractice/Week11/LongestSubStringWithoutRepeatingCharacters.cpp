#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.length() < 2)
            return s.length();
        int start = 0, end = 0;
        int arr[256]{0};
        int res = 0, n = s.length();
        while (end < n)
        {
            if (arr[s[end]] == 0)
            {
                res = max(res, end - start + 1);
                arr[s[end]] = 1;
            }
            else
            {
                while (arr[s[end]])
                {
                    arr[s[start]] = 0;
                    start++;
                }
                end--;
            }
            end++;
        }
        return res;
    }
};