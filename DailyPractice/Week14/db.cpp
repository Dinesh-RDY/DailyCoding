#include<bits/stdc++.h>
#define ll             long long int
#define F              first
#define S              second
#define pb             push_back
#define vi             vector <int>
#define pii            pair <int, int>
using namespace std;
class Solution{
    public:
    string solve(string s){
        unordered_map<char, int> mp;
        for(char c: s){
            if((65 <= c  && c <= 92 ) || (97 <= c && c <= 122)){
                if(mp[c]){
                    mp[c]++;
                }else{
                    mp[c] = 1;
                }
            }
        }
        string ans;
        for(char c : s){
            if(mp[c] == 1){
                ans.push_back(c);
            }else{
                ans.push_back(c);
                ans.push_back(mp[c]);
            }
            int sum = 0;

            while( c != ' ' && !mp[c]){
                sum += c - '0';
            }
            if(sum != 0)
                ans.push_back(sum);
            ans.push_back(' ');
        }
    }
};


int main(){

     Solution s;
     s.solve("AA AB AC 11 1112 CC");
}