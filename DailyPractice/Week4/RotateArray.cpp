#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& v, int k){
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());
}

void rightRotate(vector<int>& v , int k){
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}