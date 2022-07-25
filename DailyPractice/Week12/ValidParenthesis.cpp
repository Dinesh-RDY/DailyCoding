#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
    char Pair(char c)
    {
        if (c == ')')
            return '(';
        else if (c == '}')
            return '{';
        else
            return '[';
    }
    bool isValid(string s)
    {
        stack<char> stk;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                stk.push(c);
            else
            {
                if (stk.empty())
                    return false;
                if (stk.top() != Pair(c))
                    return false;
                stk.pop();
            }
        }
        if (stk.size())
            return false;
        return true;
    }
};