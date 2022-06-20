#include <algorithm>
using namespace std;

int check(int tree[], int n, int mid)
{
    int wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (tree[i] > mid)
            wood += tree[i] - mid;
    }
    return wood;
}

int find_height(int tree[], int n, int k)
{
    int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        end = max(end, tree[i]);
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;

        int wood = check(tree, n, mid);

        if (wood == k)
        {
            return mid;
        }

        else if (wood < k)
            end = mid - 1;

        else
            start = mid + 1;
    }

    return -1;
}