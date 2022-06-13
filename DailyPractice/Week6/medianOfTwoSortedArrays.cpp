#include <bits/stdc++.h>
using namespace std;
// Naive Solution
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        int i = 0, j = 0, k = 0, n1 = nums1.size(), n2 = nums2.size();
        vector<int> nums3(n1 + n2);
        while (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                nums3[k++] = nums1[i++];
            }
            else
            {

                nums3[k++] = nums2[j++];
            }
        }
        while (i < n1)
        {
            nums3[k++] = nums1[i++];
        }
        while (j < n2)
        {
            nums3[k++] = nums2[j++];
        }
        if ((n1 + n2) % 2 == 1)
        {
            return nums3[(n1 + n2) / 2];
        }
        else
        {
            int x = (n1 + n2) / 2;
            return double(nums3[x] + nums3[x - 1]) / 2;
        }
    }
};