#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        int arr[26] = {0};
        for (char &c : s)
        {
            arr[c - 'a']++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (arr[s[i] - 'a'] - 1 == 0)
                return i;
        }
        return -1;
    }
}; 