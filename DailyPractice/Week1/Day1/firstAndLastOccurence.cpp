// You are given an sorted array  of  integers.

// You are also given  queries, each query consist of an integer 𝑋[𝑖] , you have to report first and last occurence of 𝑋[𝑖]  in 𝐴 .

// If 𝑋[𝑖]  is not present in 𝐴  print -1 -1.

// Note :- 𝐴  follows the zero based indexing.
#include<bits/stdc++.h>
using namespace std;
class Soltion {
    public: 
        vector<int> firstAndLastOccuence(vector<int> nums , int k){
            int l = 0, h = nums.size() - 1 , mid;
            vector<int> result(2, -1);
            while(l < h){
                mid = l + (h - l + 1) / 2;
                if(nums[mid] > k){
                    h = mid - 1;
                }else{
                    l = mid;
                }
            }
            l = 0, h = nums.size() - 1;
            result[0] = mid;
            while(l < h){
                mid = l + (h - l) / 2;
                if(nums[mid] < k){
                    l = mid + 1;
                }else{
                    h = mid ;
                }
            }
        }
};