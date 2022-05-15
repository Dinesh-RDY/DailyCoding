#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void merge(vector<int> &nums1 , int m , vector<int>& nums2 ,int n){
            vector<int> temp(m + n , 0);
            int i = 0, j = 0 , k = 0;
            while(i < m && j < n){
                if(nums1[i] < nums2[j]){
                    temp[k++] = nums1[i++];
                }else{
                    temp[k++] = nums2[j++];
                }
            }
            for (; j < n;j++){
                temp[k++] = nums2[j];
            }
            for (; i < m; i++){
                temp[k++] = nums1[i];
            }
            i = 0;
            for(int x: temp){
                nums1[i++] = x;
            }
        }
};