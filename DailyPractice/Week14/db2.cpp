#include <bits/stdc++.h>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
using namespace std;
class Solution
{
public:
    string solve(string s)
    {
        int counter[256]{0};
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == ' ')
                continue;
            counter[s[i]]++;
        }
        int i = 0;
        string ans = "";
        while (i < n)
        {
            if (s[i] == ' ')
            {
                i++;
                continue;
            }
            if (counter[s[i]] > 1)
            {
                ans.push_back(s[i]);
                ans += to_string(counter[s[i]]);
            }
            else if (counter[s[i]] == 1)
            {
                ans.push_back(s[i]);
            }
            else if (s[i] <= '9' && s[i] >= '0')
            {
                int sum = 0;
                while (s[i] != ' ' && i < n)
                {
                    sum += s[i] - '0';
                    i++;
                }
                ans += to_string(sum);
            }
            if(counter[s[i]] != -1)
                ans.push_back(' ');
            counter[s[i]] = -1;
            i++;
        }
        return ans;
    }
};

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("..\\input.txt","r",stdin);
        freopen("..\\output.txt","w",stdout);
    #endif
    Solution s;
    string input;
    getline(cin, input);
    string output = s.solve(input);
    cout << output;
}