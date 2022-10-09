#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findArray(vector<int>& v) {
        int previousXOR = v[0];
        vector<int> ans(v.size());
        ans[0] = previousXOR;
        for (int i = 1; i < v.size(); i++){
            // find the array element
            ans[i] =  (previousXOR ^ v[i]);
            // Update previousXOR just XOR the present value we calculated
            previousXOR = (previousXOR xor ans[i]);
        }
        return ans;
    }
};