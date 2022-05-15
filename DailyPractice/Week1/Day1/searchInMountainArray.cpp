
class MountainArray
{
public:
    int get(int index);
    int length();
};

class Solution
{
public:
    int findInMountainArray(int target, MountainArray &mountainArr)
    {
        int n = mountainArr.length();
        int l = 0, h = n - 1, mid;

        while (l < h)
        {
            mid = l + (h - l) / 2;
            if (mountainArr.get(mid) > mountainArr.get(mid + 1))
            {
                h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        int peak = l;
        int val = mountainArr.get(peak);
        if (val == target)
        {
            return peak;
        }
        l = 0, h = peak - 1;
        while (l <= h)
        {
            mid = l + (h - l) / 2;
            int v = mountainArr.get(mid);
            if (v > target)
            {
                h = mid - 1;
            }
            else if (v < target)
            {
                l = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        l = peak + 1, h = n - 1;
        while (l <= h)
        {
            mid = l + (h - l) / 2;
            int v = mountainArr.get(mid);

            if (v > target)
            {
                l = mid + 1;
            }
            else if (v < target)
            {
                h = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
