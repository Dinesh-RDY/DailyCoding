#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        vector<int> ans;
        long long sum = 0;
        long long temp = n;
        while(temp){
            sum += (temp % 10);
            temp /= 10;
        }
        int carry = 0;
        while(sum >= target){
            int last_digit = n % 10;
            int rem = 10 - last_digit - carry;
            sum -= last_digit;
            ans.push_back(rem);
            n /= 10;
            carry = 1;
        }
        sum = 0;
        for(int i = ans.size() - 1; i >=0 ; i--){
            sum = sum * 10 + ans[i];
        }
        return sum;
    }
};
int main(){
    Solution s;
    cout << s.makeIntegerBeautiful(209659314313, 22);
}