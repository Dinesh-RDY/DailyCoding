#include <algorithm>
using namespace std;
class Solution
{
public:
    // Function to find minimum adjacent difference in a circular array.
    //  arr[]: input array
    //  n: size of array
    int minAdjDiff(int arr[], int n)
    {
        // Your code here
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, abs(arr[i] - arr[i + 1]));
        }
        ans = min(ans, abs(arr[n - 1] - arr[0]));
        return ans;
    }
};