int maxOccured(int l[], int r[], int n, int maxx)
{

    // Your code here
    int arr[maxx] = {0};
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        arr[l[i]] += 1;
        arr[r[i] + 1] -= 1;
    }
    int msum = arr[0], ind = 0;
    for (int i = 0; i < maxx; i++)
    {
        arr[i] += arr[i - 1];
        if (msum < arr[i])
        {
            msum = arr[i];
            ind = i;
        }
    }
    return ind;
}