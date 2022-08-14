// You are given an sorted array  of  integers.

// You are also given  queries, each query consist of an integer 𝑋[𝑖] , you have to report first and last occurence of 𝑋[𝑖]  in 𝐴 .

// If 𝑋[𝑖]  is not present in 𝐴  print -1 -1.

// Note :- 𝐴  follows the zero based indexing.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Solution using predicate FrameWork
    vector<int> firstAndLastOccuence(vector<int> &nums, int k)
    {
        int l = 0, h = nums.size() - 1, mid;
        vector<int> result(2, -1);
        while (l < h)
        {
            mid = l + (h - l + 1) / 2;
            if (nums[mid] > k)
            {
                h = mid - 1;
            }
            else
            {
                l = mid;
            }
        }
        l = 0, h = nums.size() - 1;
        result[0] = mid;
        while (l < h)
        {
            mid = l + (h - l) / 2;
            if (nums[mid] < k)
            {
                l = mid + 1;
            }
            else
            {
                h = mid;
            }
        }
        return result;
    }
    // Solution using normal Binary Search
    vector<int> firstAndLastOccuence2(vector<int> &nums, int target)
    {
        int l = 0, h = nums.size() - 1, mid;
        vector<int> ans(2, -1);
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (nums[mid] == target && (mid == 0 || nums[mid] != nums[mid - 1]))
            {
                ans[0] = mid;
                break;
            }
            else if (nums[mid] < target)
                l = mid + 1;
            else
                h = mid - 1;
        }
        if (ans[0] == -1)
            return ans;
        l = ans[0], h = nums.size() - 1;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (nums[mid] == target && (mid == nums.size() - 1 || nums[mid] != nums[mid + 1]))
            {
                ans[1] = mid;
                break;
            }
            else if (nums[mid] > target)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> v{1, 2, 2, 2, 2, 2, 5, 6};
    vector<int> res = Solution().firstAndLastOccuence2(v, 2);
    for (int x : res)
        cout << x << " ";
}