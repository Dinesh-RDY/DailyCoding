#include<bits/stdc++.h>
class Solution
{
public:
    int singleNumber(std::vector<int> &nums)
    {
        int ans = 0;
        for(int x: nums){
            ans = (ans ^ x);
        }
        return ans;
    }
};