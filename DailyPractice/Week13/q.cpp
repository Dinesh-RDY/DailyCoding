// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A)
{
    // write your code in C++14 (g++ 6.2.0)
    unordered_set<int> ht;
    int ans = 0, n = A.size();
    for (int i = 0; i < n; i++)
    {
        if (ht.find(-1 * A[i]) == ht.end())
        {
            ht.insert(A[i]);
        }
        else
        {
            ans = max(ans, A[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> v{{3, 2, -2, 5, -3}};
    cout << solution(v);
}