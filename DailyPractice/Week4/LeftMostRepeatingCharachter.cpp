#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        int arr[26] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            if (!arr[s[i] - 'a'])
            {
                arr[s[i] - 'a'] = i + 1;
            }
            else
            {
                return arr[s[i] - 'a'] - 1;
            }
        }
        return -1;
    }
};