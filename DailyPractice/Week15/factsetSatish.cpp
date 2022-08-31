#include <bits/stdc++.h>
using namespace std;
char solve(string s)
{
    int arr[256]{0};
    for (char c : s)
    {
        arr[c]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (arr[s[i]] == 1)
            return i + 1;
    }
    return -1;
}