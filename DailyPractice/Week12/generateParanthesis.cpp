#include <vector>
#include <string>
using namespace std;
// Add closing bracket only when open bracket are greater than closing
// add opening bracket only when size of string < n
class Solution
{
public:
    vector<string> ans;
    void recurse(int open, int close, int n, string s)
    {
        if (s.length() == 2 * n)
        {
            ans.push_back(s);
            return;
        }
        if (open < n)
            recurse(open + 1, close, n, s + '(');
        if (close < open)
            recurse(open, close + 1, n, s + ')');
    }

    vector<string> generateParenthesis(int n)
    {
        recurse(0, 0, n, "");
        return ans;
    }
};