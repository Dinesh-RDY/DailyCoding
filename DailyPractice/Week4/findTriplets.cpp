#include<iostream>
using namespace std;
#include<algorithm>
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        if(arr[0] > 0) return false;
        for(int i = 0 ; i < n -1 ;i++){
            if(arr[i] > 0) break;
            int sum = 0 , l = i+1, h = n-1;
            while(l < h){
                sum = arr[i] + arr[l] + arr[h];
                if(sum == 0) return true;
                else if(sum > 0) h--;
                else l++;
            }
        }
        return false;
    }
};