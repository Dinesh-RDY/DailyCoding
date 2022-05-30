#include<bits/stdc++.h>
using namespace std;
int findFloor(long long int arr[], int N, long long int x) {
    
    //Your code here
    
    int l = 0 , h = N-1, res = -1;
    while(l <= h ){
        int mid = l+(h-l)/2;
        if(arr[mid] == x){
            return mid;
        }else if (arr[mid] < x){
            res = l;
            l = mid+1;
        }else{
            h = mid-1;
        }
    }
    return res;
}