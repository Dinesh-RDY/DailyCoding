#include<bits/stdc++.h>
using namespace std;
string stringChallenge(string s, int num){
    for (int i = 0; i < s.length(); i++){
        int temp , flag = 0;
        if(65 <=s[i] && s[i] <= 91){
            temp = s[i] - 'A';
            flag = 1;
        }
        else
            temp = s[i] - 'a';
        temp = (temp + num) % 26 ;
        if(flag)
            s[i] = temp + 'A';
        else
            s[i] = temp + 'a';
    }
    return s;
}
int main(){
    cout << stringChallenge("Hello" , 4);
}