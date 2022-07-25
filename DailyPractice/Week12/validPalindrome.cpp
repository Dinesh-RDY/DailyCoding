#include <string>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string res = "";
        for (char c : s)
        {
            if (97 <= c && c <= 122)
                res.push_back(c);
            else if (65 <= c && c <= 90)
                res.push_back(c + 32);
            else if (48 <= c && c <= 57)
                res.push_back(c);
        }
        int l = 0, h = res.size() - 1;
        while (l <= h)
        {
            if (res[l] == res[h])
            {
                l++;
                h--;
            }
            else
                return false;
        }
        return true;
    }
};