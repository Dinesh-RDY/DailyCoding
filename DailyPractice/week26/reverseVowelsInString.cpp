#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    inline bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'U' || c == 'O')
            return true;
        return false;
    }

public:
    string reverseVowels(string s)
    {
        int l = 0, h = s.length() - 1;
        while (l < h)
        {
            while (l < h && !isVowel(s[l]))
            {
                l++;
            }
            if (l == h)
                return s;
            while (l < h && !isVowel(s[h]))
                h--;
            if (l == h)
                return s;
            swap(s[l], s[h]);
            l++, h--;
        }
        return s;
    }
};