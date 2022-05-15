#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int numberOfBits(int n){
            int sum = 0;
            while(n){
                n = (n & n - 1);
                sum++;
            }
            return sum;
        }
        vector<int> sortByBits(vector<int>& arr){
            map<int, multiset<int> > mp;
            for(int ele : arr){
                int val = numberOfBits(ele);
                mp[val].insert(ele);
            }
            vector<int> ans;
            for(auto i : mp){
                for (auto z : i.second){
                    ans.push_back(z);
                }
            }
            return ans;
        }
};