#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Naive Method O(m + n) time and space complexity
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() , n2 = nums2.size();
        vector<int> nums3(n1+n2);
        int i = 0 , j = 0 , k = 0;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                nums3[k++] = nums1[i++];
            }else{
                nums3[k++] = nums2[j++];
            }
        }
        
        for(;i <n1;i++){
            nums3[k++] = nums1[i];
        }
        for(; j< n2;j++){
            nums3[k++] = nums2[j];
        }
        int n3 = nums3.size();
        if(n3%2 == 0){
            return  (nums3[n3/2-1] + nums3[n3/2])/2.0 ;
        }else{
            return nums3[n3/2];
        }
        return -1;
    }
    double optimized(vector<int>& nums1 , vector<int> & nums2){
        int n1 = nums1.size() , n2 = nums2.size();
        int begin = 0, end = n1;
        while(begin <= end){
            int i1 = (begin + end) / 2;
            int i2 = (n1 + n2 + 1) / 2 - i1;
            int min1 = (i1 == n1) ? INT_MAX : nums1[i1];
            int max1 = (i1 == 0) ? INT_MIN : nums1[i1 - 1];
            int max2 = (i2 == 0) ? INT_MIN : nums2[i2 - 1];
            int min2 = (i2 == n2) ? INT_MAX : nums2[i2];
            if(max1 <= min2 && max2 <= min1){
                if(n1+n2 %2 ==0){
                    return (max(max1, max2), max(min1, min2)) / 2.0;
                }
                return (max(max1 , max2));
            }
            else if(max1 > min1){
                end = i1 - 1;
            }else{
                begin = i1 + 1;
            }
        }
        return -1;
    }
};