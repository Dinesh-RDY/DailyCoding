#include <algorithm>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m)
{
    // code
    sort(a.begin(), a.end());
    if (m == 1)
        return 0;
    long long min_diff = LONG_LONG_MAX;
    for (int i = 0; i < n - m + 1; i++)
    {
        min_diff = min(a[i + m - 1] - a[i], min_diff);
    }
    return min_diff;
}