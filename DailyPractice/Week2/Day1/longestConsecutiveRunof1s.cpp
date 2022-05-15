#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
     int count=0,maxc=INT_MIN;
    while(n>0)
    {
    if(n&1)
        {
            count++;
            n=n>>1;
            if(count>maxc)
                maxc=count;
        }
        else
        {
            count=0;
            n=n>>1;
        }
    }
    return maxc;
}
int main()
{

    cout << "answer " << solve(153);
}