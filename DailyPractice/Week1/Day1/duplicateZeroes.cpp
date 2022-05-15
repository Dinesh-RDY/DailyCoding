#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void shift(vector<int> &arr, int k)
    {
        int i = arr.size() - 2;
        while (i > k)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = 0;
    }
    void duplicateZeros(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                shift(arr, i);
                i++;
            }
        }
    }
};