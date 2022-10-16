#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countTime(string time)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            arr[i] = 1;
        }
        if (time[4] == '?')
        {
            arr[3] = 10;
        }
        if (time[3] == '?')
        {
            arr[2] = 6;
        }
        if (time[1] == '?')
        {
            if (time[0] == '0' || time[0] == '1')
            {
                arr[1] = 10;
            }
            else if (time[0] == '2')
            {
                arr[1] = 4;
            }
            else
            {
                arr[1] = 24;
            }
        }
        if (time[0] == '?' && time[1] != '?')
        {
            int x = time[1] - '0';
            if (x > 3)
            {
                arr[0] = 2;
            }
            else
            {
                arr[0] = 3;
            }
        }
        return arr[0] * arr[1] * arr[2] * arr[3];
    }
};