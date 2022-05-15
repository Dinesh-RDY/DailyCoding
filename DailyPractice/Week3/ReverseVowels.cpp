#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isVowel(char x)
    {
        char vowels[] = {'a', 'e', 'i', 'o', 'u'};

        for (int k = 0; k < 5; k++)
        {
            if (tolower(x) == vowels[k])
            {
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string s)
    {
        int n = s.length();
        if (n < 2)
            return s;
        int i = 0, j = n - 1;
        while (i < j)
        {
            char x = s[i], y = s[j];
            while(i < j && !isVowel(x)){
                x = s[++i];
            }
            while(i < j && !isVowel(y)){
                y = s[--j];
            }
            swap(s[i], s[j]);
            i++, j--;
        }
        return s;
    }
};

int main(){
    cout << Solution()
                .reverseVowels("hello   ");
}