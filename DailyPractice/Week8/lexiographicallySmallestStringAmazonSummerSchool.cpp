#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string findMinString(string s){
            stack<char> stk;
            string ans = "";
            stk.push(s[0]);
            for (int i = 1; i < s.length();i++){ 
                if(stk.top() > s[i]){
                    stk.push(s[i]);
                }else{
                    while(!stk.empty() && stk.top() < s[i]){
                        ans += stk.top();
                        stk.pop();
                    }
                    stk.push(s[i]);
                }
            }
            while(!stk.empty()){
                ans += stk.top();
                stk.pop();
            }
            return ans;
        }
};

int main(){
    Solution s;
    cout << s.findMinString("cbad");
}