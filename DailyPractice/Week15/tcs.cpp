#include <bits/stdc++.h>
using namespace std;
unordered_set<char> ht, changes;
class Solution
{
private:
    int count = 0;

public:
    int solve(string s1, string s2)
    {
        int m = s1.length(), n = s2.length();
        for (char c : s1)
        {
            ht.insert(c);
        }
        while (m >= 0)
        {
            if (s1[m - 1] == s2[n - 1])
            {
                m--;
                n--;
            }
            else
            {
                char c = s2[n - 1];
                if (ht.find(c) == ht.end())
                {
                    return -1;
                }
                else
                {
                    if (changes.find(c) == changes.end())
                    {
                        count++;
                        changes.insert(c);
                        m--;
                        n--;
                    }
                    else
                    {
                        m--;
                        n--;
                    }
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    string s1, s2;
    cin >> s1 >> s2;
    cout << s.solve(s1, s2);
}