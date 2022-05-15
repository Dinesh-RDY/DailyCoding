#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        int distinctCandies = 0;
        unordered_map<int, int> mp;
        for (int x : candyType)
            mp[x]++;
        for (auto it = mp.begin(); it != mp.end(); it++){
                distinctCandies++;
        }
        int n = candyType.size();
        return distinctCandies >= n / 2 ? n / 2 : distinctCandies;
    }
};