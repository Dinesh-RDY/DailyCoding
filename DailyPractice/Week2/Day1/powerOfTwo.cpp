#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0 || n == INT_MAX || n == INT_MIN) return false;
        if(n & n-1){
            return false;
        }
        return true;
    }   
};