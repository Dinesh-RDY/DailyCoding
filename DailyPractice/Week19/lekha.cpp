#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], string s, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'P')
        {
            sum += arr[i];
        }
        else
        {
            sum -= arr[i];
        }
    }
    return abs(sum) * 100;
}

int main()
{
    int arr[]{1, 2, 3, 4};
    cout << solution(arr, "PNPN", 4);
}