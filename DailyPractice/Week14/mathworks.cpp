#include <bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>& arr, int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x > arr[mid])
            low = mid + 1;

        else if (x < arr[mid])
            high = mid - 1;

        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;

            else
                high = mid - 1;
        }
    }

    return -1;
}
vector<int> solve(vector<int> &arr, vector<int> &query)
{
    sort(arr.begin(), arr.end());
    int n = query.size();
    vector<int> ans;
    for (int i = 0; i < query.size(); i++){
        int loc = firstOcc(query, n , query[i]);
        
    }
}