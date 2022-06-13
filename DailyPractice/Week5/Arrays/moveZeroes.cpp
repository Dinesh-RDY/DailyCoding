#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void movezeros(int arr[] , int n){
            int count = 0;
            for (int i = 0; i < n;i++){
                if(arr[i]){
                    swap(arr[i], arr[count]);
                    count++;
                }
            }
        }
};