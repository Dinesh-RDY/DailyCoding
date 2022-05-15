#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calDays(vector<int>& weights, int cap){
        int days = 0;
        int n = weights.size() - 1;
        int l = 0;
        int sum = 0;
        while( l < n){
            if(weights[l] + sum <= cap ){
                sum += weights[l];
                l++;
            }else{
                days++;
                sum = 0;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = INT_MIN, sum = 0;
        for(int x :weights){
            if(maxi < x)
                maxi = x;
            sum += x;
        }
        int l = maxi, h = sum ,mid;
        while(l < h){
            mid = l + (h - l) / 2;
            if(calDays( weights, mid) < days){
                h = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};