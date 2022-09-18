#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s , int i , int j){
    while(i<= j){
        if(s[i] != s[j])
            return false;
    }
    return true;
}

bool reverse(string s){

}