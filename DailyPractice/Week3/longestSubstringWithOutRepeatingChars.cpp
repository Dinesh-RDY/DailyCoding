#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 2)
            return s.length();
        int i = 0, j = 0;
        unordered_map<int, int> mp;
        int max_length = 0;
        while(j < s.length()){
            if(!mp[s[j]]){
                cout << "Hello";
                mp[s[j]] = j;
                j++;
                max_length = max(max_length, j - i  );
            }else{
                int k = mp[s[j]];
                for (; i <= k;i++){
                    mp[s[i]] = 0;
                }
            }
        }
        return max_length;
    }
};
int main(){
    cout << Solution().lengthOfLongestSubstring("abccdd");
}