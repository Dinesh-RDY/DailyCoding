#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void movezeroes(vector<int>& v){
            int last_non_zero = 0;
            for (int i = 0; i < v.size();i++){
                if(v[i] != 0){
                    swap(v[last_non_zero], v[i]);
                    last_non_zero++;
                }
            }
        }
};
int main(){
    vector<int> v{1, 0, 0, 2, 0, 0, 3, 5};
    Solution().movezeroes(v);
    for(int e: v)
        cout << e << " ";
}