#include <algorithm>
using namespace std;
// Function to find matching decimal representation of a string as on the keypad.
int repeatedCharacter(string s)
{
    // Your code here
    unordered_map<char, pair<int, int>> mp;
    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (mp.find(x) == mp.end())
        {
            mp.insert({x, {i, 1}});
        }
        else
        {
            mp[x].second++;
        }
    }
    for (char x : s)
    {
        if (mp[x].second > 1)
            return mp[x].first;
    }
    return -1;
}