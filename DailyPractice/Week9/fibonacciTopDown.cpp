#include <bits/stdc++.h>
using namespace std;
int fibonacciTopDown(int number, int dp[])
{
    if (number == 0 || number == 1)
        return number;
    if (dp[number])
        return dp[number];
    return dp[number] = fibonacciTopDown(number - 1, dp) + fibonacciTopDown(number - 2, dp);
}
int main()
{
    int n;
    cin >> n;
    int dp[n + 1]{0};
    cout << fibonacciTopDown(n, dp);
}