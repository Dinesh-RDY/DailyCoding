
#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> &arr, int num)
{
    int count = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != num)
        {
            count++;
            if (arr[i] == 0)
                num = 1;
            else
                num = 0;
        }
    }
    return count;
}

int solution(vector<int> &A)
{
    return min(helper(A, 0), helper(A, 1));
}

int main()
{
    vector<int> v{1, 0, 1, 0, 1, 1};
    cout << solution(v);
}