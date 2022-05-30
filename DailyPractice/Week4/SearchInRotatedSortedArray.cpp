#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchUsingPureBS(vector<int>& arr, int target) {
        int l = 0 , n = arr.size() , h = n-1;
        while(l <= h){
            int mid = (l+h)/2;
            if(arr[mid] == target) return mid;
            if(arr[l] <= arr[mid]){
                if(arr[l] <= target && arr[mid] > target){
                    h = mid-1;
                }else{
                    l = mid+1;
                }
            }
            else{
                if(arr[mid] < target && arr[h] >= target )
                    l = mid+1;
                else
                    h= mid-1;
            }
        }
        return -1;
    }
    int bs(vector<int> & nums,int l , int h , int target){
        while(l <= h){
            int mid = (l + h) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
    int searchUsingPredicateFrameWork(vector<int>& nums, int target){
        int l = 0, n = nums.size(), h = n - 1;
        while(l < h){
            int mid = (l + h) / 2;
            if(nums[mid] > nums[0])
                h = mid;
            else
                l = mid + 1;
        }
        int index = l;
        if(nums[n-1] < target){
           index =  bs(nums, index, n - 1 , target);
        }else{
             index  = bs(nums, 0, index , target);
        }
        return index;
    }
};