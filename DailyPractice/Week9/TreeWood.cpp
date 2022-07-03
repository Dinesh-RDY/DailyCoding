
int checkIfPossible(int h, int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
        {
            sum += (arr[i] - h);
        }
    }
    return sum;
}
int find_height(int arr[], int n, int k)
{
    // code here
    int maxi = -1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int l = 0, h = maxi, mid;
    while (l <= h)
    {
        mid = (h - l) / 2 + l;
        int wood = checkIfPossible(mid, arr, n, k);
        if (wood > k)
        {
            l = mid + 1;
        }
        else if (wood < k)
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