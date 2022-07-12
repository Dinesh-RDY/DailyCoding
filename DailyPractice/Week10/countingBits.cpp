#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> countBits(int n)
    {
        if (n == 0)
            return {0};
        vector<int> vec(n + 1, 0);
        vec[1] = 1;
        int offset = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == offset * 2)
                offset = i;
            vec[i] = 1 + vec[i - offset];
        }
        return vec;
    }
};