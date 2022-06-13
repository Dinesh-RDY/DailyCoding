#include <algorithm>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    // The main function that returns the arrangement with the largest value as
    // string.
    // The function accepts a vector of strings
    static bool comp(string &num1, string &num2)
    {
        return num1 + num2 > num2 + num1;
    }
    string printLargest(vector<string> &arr)
    {
        // code here
        sort(arr.begin(), arr.end(), comp);
        string ans = "";
        bool flag = false;
        for (auto &x : arr)
        {
            if (x != "0")
            {
                flag = true;
            }
            ans += x;
        }
        if (!flag)
            return "0";
        return ans;
    }
};