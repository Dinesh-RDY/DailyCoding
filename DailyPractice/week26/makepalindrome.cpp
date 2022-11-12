#include<bits/stdc++.h>
using namespace std;
string stringChallenge(string s){
    int i = 0, j = s.length() - 1;
    bool flag = false;
    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }else if(!flag){
            if(i + 1 != j && s[i+1]  == s[j]){
                swap(s[i], s[ i + 1]);
                flag = true;
            }else{
                return "-1";
            }
        }else{
            return "-1";
        }
    }
    return s + "token";
}
int main(){
    cout << stringChallenge("kyaak");
}