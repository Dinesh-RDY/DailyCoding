#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int i = 0, j = arr.size() - 1, mid;
        while(i <= j){
            mid = (i + j) / 2;
            if(arr[mid] == target)
                return mid;
            if(arr[i] <= arr[mid]){
                if(arr[i] <= target && arr[mid] > target)
                    j = mid - 1;
                else
                    i = mid + 1;
            }else{
                if(arr[mid] < target && arr[j] >= target)
                    i = mid + 1;
                else
                    j = mid - 1;
            }
        }
        return -1;
    }
};