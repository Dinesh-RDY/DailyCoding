#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int count = 0;
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] > arr[i] && arr[i - 1] > arr[i])
            {
                return false;
            }
            if (arr[i] == arr[i + 1] || arr[i] == arr[i - 1])
                return false;
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
            {
                count++;
            }
        }
        if (count == 0 || count > 1)
            return false;
        else
        {
            return true;
        }
    }
};