#include<algorithm>
using namespace std;
class Solution{
    public:
        // rotating counter clockwise direction 
        void rotateArray(vector<int> v, int d){
            d = d % v.size();
            reverse(v.begin(), v.begin() + d);
            reverse(v.begin() + d, v.end());
            reverse(v.begin(), v.end());

        }
};