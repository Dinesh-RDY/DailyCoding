#include <bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n)
{

    // Your code here
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    long long prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {

        if (sum - a[i] == 2 * prefix_sum)
        {
            return i;
        }
        prefix_sum += a[i];
    }
    return -1;
}
int main()
{
    long long arr[] = {1, 3, 3, 5, 2};
    cout << equilibriumPoint(arr, 5);
}