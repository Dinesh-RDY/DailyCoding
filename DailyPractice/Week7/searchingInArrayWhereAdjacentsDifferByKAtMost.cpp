#include <algorithm>
using namespace std;

int search(int arr[], int n, int x, int k)
{
    // Complete the function1
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
            return i;
        int diff = abs(arr[i] - x);
        int jump = diff / k;
        i += max(1, jump);
    }
    return -1;
}