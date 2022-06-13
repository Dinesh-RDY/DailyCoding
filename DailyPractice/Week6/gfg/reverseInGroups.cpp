#include <algorithm>
#include <vector>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    // code here
    int i;
    if (k >= n)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for (i = 0; i < n - k; i += k)
    {
        reverse(arr.begin() + i, arr.begin() + i + k);
    }
    reverse(arr.begin() + i, arr.end());
}