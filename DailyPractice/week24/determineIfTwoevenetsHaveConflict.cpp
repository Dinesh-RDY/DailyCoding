#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool haveConflict(vector<string> &event1, vector<string> &event2)
    {
        auto x = event1[0], y = event1[1];
        int a1 = ((x[0] - '0') * 10 + x[1] - '0') * 60 + ((x[2] - '0') * 10 + x[3] - '0');
        int b1 = ((y[0] - '0') * 10 + y[1] - '0') * 60 + ((y[2] - '0') * 10 + y[3] - '0');
        x = event2[0], y = event2[1];

        int a2 = ((x[0] - '0') * 10 + x[1] - '0') * 60 + ((x[2] - '0') * 10 + x[3] - '0');
        int b2 = ((y[0] - '0') * 10 + y[1] - '0') * 60 + ((y[2] - '0') * 10 + y[3] - '0');

        if (a1 <= a2 && a2 <= b1)
            return true;
        if (a2 <= a1 && a1 <= b2)
            return true;
        return false;
    }
};