long long int floorSqrt(long long int x)
{
    // Your code goes here
    long long int h = x, l = 1, mid;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        if (mid * mid == x)
            return mid;
        else if (mid * mid < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    if (mid * mid > x)
        return mid - 1;
    else
        return mid;
}