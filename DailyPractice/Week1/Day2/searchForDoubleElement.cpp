#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool checkIfExist(vector<int>& nums){
            unordered_map<int, bool> hmap;
            for(int x: nums){
                if(hmap[2 * x])
                    return true;
                else if(x %2 == 0 && hmap[x/2]){
                    return true;
                }else{
                    hmap[x] = true;
                }
            }
            return false;
        }
};