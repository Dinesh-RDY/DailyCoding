#include <string>
using namespace std;
bool areIsomorphic(string str1, string str2)
{

    // Your code here
    if (str1.length() != str2.length())
        return 0;

    char um1[256] = {0};
    char um2[256] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        if (um1[str1[i]] == 0 && um2[str2[i]] == 0)
        { // storing key and value
            um1[str1[i]] = str2[i];
            um2[str2[i]] = str1[i];
        }
        else
        { // matching key and value
            if (um1[str1[i]] != str2[i] || um2[str2[i]] != str1[i])
                return 0;
        }
    }
    return 1;
}