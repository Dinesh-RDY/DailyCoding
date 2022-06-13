#include <string>
using namespace std;
#include <vector>
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (s.length() <= 2 || numRows >= s.length() || numRows == 1)
            return s;
        vector<string> ans(numRows, "");
        int index = 0, direction = 1;
        for (int i = 0; i < s.length(); i++)
        {
            ans[index] += s[i];
            if (index == 0)
                direction = 1;
            if (index == numRows - 1)
                direction = -1;
            if (direction == -1)
            {
                index--;
            }
            else
            {
                index++;
            }
        }
        string x = "";
        for (auto &s : ans)
        {
            x += s;
        }
        return x;
    }
};