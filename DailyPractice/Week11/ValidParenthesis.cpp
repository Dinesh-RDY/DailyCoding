#include <stack>
#include <string>   
using namespace std;
class Solution
{
public:
    bool isOpen(char c)
    {
        if (c == '{' || c == '(' || c == '[')
            return true;
        return false;
    }
    bool isValid(string s)
    {
        stack<char> stk;
        for (char c : s)
        {
            if (stk.empty() && isOpen(c))
            {
                stk.push(c);
            }
            else if (stk.empty() && !isOpen(c))
            {
                return false;
            }
            else
            {
                if (c == '}' && stk.top() != '{')
                    return false;
                else if (c == ')' && stk.top() != '(')
                    return false;
                else if (c == ']' && stk.top() != '[')
                    return false;
                else if (isOpen(c))
                {
                    stk.push(c);
                    continue;
                }
                stk.pop();
            }
        }
        if (!stk.empty())
            return false;
        return true;
    }
};