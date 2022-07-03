#include <bits/stdc++.h>
using namespace std;
string printNumber(string s, int n)
{
    // code here
    char arr[26] = {0};
    int num = 2;
    for (int i = 0; i < 18; i++)
    {
        if (i != 0 && i % 3 == 0)
            num++;
        arr[i] = num;
    }
    arr[18] = 7;
    for (int i = 19; i <= 25; i++)
    {
        if (i < 22)
            arr[i] = 8;
        else
            arr[i] = 9;
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += to_string(arr[s[i] - 'a']);
    }
    return ans;
}