#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &arr, int k)
    {
        int n = arr.size();
        if (n < 4)
        {
            return {};
        }
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int l = j + 1, h = n - 1;
                long long int target1 = k - (arr[i] + arr[j]);
                while (l < h)
                {
                    if (arr[l] + arr[h] == target1)
                    {
                        ans.push_back({arr[i], arr[j], arr[l], arr[h]});
                        l++, h--;
                        while (l < h && arr[l] == arr[l - 1])
                            l++;
                        while (l < h && arr[h] == arr[h + 1])
                            h--;
                    }
                    else if (arr[l] + arr[h] < target1)
                    {
                        l++;
                    }
                    else
                    {
                        h--;
                    }
                }

                while (j + 1 < n && arr[j] == arr[j + 1])
                    j++;
            }
            while (i + 1 < n && arr[i] == arr[i + 1])
                i++;
        }
        return ans;
    }
};