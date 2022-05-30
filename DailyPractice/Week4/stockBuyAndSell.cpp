#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int min_price = prices[0], max_profit = -1;
        for (int i = 0; i < prices.size(); i++)
        {
            max_profit = max(max_profit, prices[i] - min_price);
            min_price = min(prices[i], min_price);
        }
        return max_profit;
    }
};