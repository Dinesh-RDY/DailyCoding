#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
        string convertToTitle(int columnNumber){
            string ans = "";
            
            while(columnNumber){
                int rem = (columnNumber-1) % 26;
                ans.push_back(rem + 'A');
                columnNumber = (columnNumber - 1 )/ 26;
            }
            reverse(ans.begin() ,ans.end());
             return ans;
        }
};