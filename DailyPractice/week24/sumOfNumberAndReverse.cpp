#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int num){
        int sum = 0;
        sum = sum * 10 + num % 10;
        num /= 10;
    }
    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i < num; i++){
            if(num == i + reverse(i))
                return true;
        }
        return false;
    }
};