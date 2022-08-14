#include <bits/stdc++.h>
using namespace std;
int lps(int seq[], int i, int j)
{
    if (i == j)
        return 1;

    if (seq[i] == seq[j] && i + 1 == j)
        return 2;

    if (seq[i] == seq[j])
        return lps(seq, i + 1, j - 1) + 2;

    return max(lps(seq, i, j - 1), lps(seq, i + 1, j));
}
string substring(string s, int l, int r)
{   
    while (l >= 0 and r < s.length() and s[l] == s[r])
    {
        l--;
        r++;
    }
    return s.substr(l + 1, r - l - 1);
}
int longestPalindrome(string str)
{
    string temp = "", res = "";
    for (int i = 0; i < str.length(); i++)
    {
        temp = substring(str, i, i + 1);
        if (res.length() < temp.length())
        {
            res = temp;
        }
        temp = substring(str, i, i);
        if (res.length() < temp.length())
            res = temp;
    }

    return res.length();
}

int solver(string arr[], int n)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = longestPalindrome(arr[i]);
    }
    int res = lps(b, 0, n - 1);
    return res;
}
int main()
{
    string arr[]{"abc", "aab", "aba"};
    cout << solver(arr, 3);
}