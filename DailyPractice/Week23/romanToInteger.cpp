#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            cout << sum << endl;
            if (s[i] == 'M')
            {
                sum += 1000;
            }
            else if (s[i] == 'D')
            {
                sum += 500;
            }
            else if (s[i] == 'C')
            {
                if (i != s.length() - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                    sum -= 100;
                else
                    sum += 100;
            }
            else if (s[i] == 'L')
            {
                sum += 50;
            }
            else if (s[i] == 'X')
            {
                if (i != s.length() - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                    sum -= 10;
                else
                    sum += 10;
            }
            else if (s[i] == 'V')
            {
                sum += 5;
            }
            else if (s[i] == 'I')
            {
                if (i != s.length() - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                    sum -= 1;
                else
                    sum += 1;
            }
        }
        return sum;
    }
};
int main(){
    Solution s;
    cout << s.romanToInt("MCMXCIV");

}