#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x == INT_MIN)
            return false;
        string s = to_string(x);
        int i = 0, j = s.length() - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    

};
class Solution {
public:
    bool isPalindrome(int x) {
        if(x == INT_MIN || x < 0) return false;
        long sum = 0 , temp  = x;
        while(x){
            int l = x % 10;
            sum = sum * 10 + l;
            x = x/10;
        }
        if(sum == temp) return true;
        return false;
    }
};