#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int score(int target,int presentscore, vector<int>& dp, int one, int zero)
{
	
	if (target == presentscore)
		return 1;
	
	if (target < presentscore)
		return 0;
	
	if (dp[target] != -1)
		return dp[target];
	long long sum;
    
	sum =  score(target , presentscore + one , dp, one, zero) + score(target  , presentscore + zero, dp,one, zero);
	return dp[presentscore] = (sum % (mod));
}
int countGoodStrings(int low, int high, int zero, int one)
{
	vector<int> dp(high + 1, -1);

	int ans = 0;
	
	for (int i = low; i <= high; i++)
	{
		ans = ((ans % mod) + ( score(i, 0 ,dp, one, zero) % mod )) % mod;
	}
	return ans;
}
};
int main(){
    cout << Solution().countGoodStrings(2 , 3,  1 , 2);
}