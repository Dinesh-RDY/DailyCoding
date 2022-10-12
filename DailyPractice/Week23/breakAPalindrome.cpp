#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int index = -1 , n = palindrome.length();
        for(int i = 0 ; i < n /2 ; i++){
            if(palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n-1] = 'b';
        return n > 1 ?  palindrome : "";
    }
};

int main(){
    Solution s;
    cout << s.breakPalindrome("ababa");
}