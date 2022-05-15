#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findNumbers(vector<int>& nums){
            int count = 0,temp= 0;
            for(int x : nums){
                temp = 0;
                while(x){
                    x = x / 10;
                    temp++;
                }
                if(temp % 2 == 0)
                    count++;
            }
            return count;
        }
};