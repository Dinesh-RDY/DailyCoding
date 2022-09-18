#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n;
    cin >> n;
    if(n == 1)
        return 1;
    if(n % 2 == 0){
        return log2(n);
    }else{
        return int(log2(n)) + 1;
    }
}
int main()
{
    cout << solve();
}