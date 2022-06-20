// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int x);
class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, h = n, mid;
        while (l <= h)
        {
            mid = (h - l) / 2 + l;
            if (isBadVersion(mid))
            {
                if (mid == 0 || !isBadVersion(mid - 1))
                    return mid;
                else
                    h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return mid;
    }
};