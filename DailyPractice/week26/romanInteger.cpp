#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num)
{
    string res;
    string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    for (int i = 0; num != 0; i++)
    {
        while (num >= val[i])
        {
            num -= val[i];
            res += sym[i];
        }
    }

    return res;
}
string func(string s)
{
    unordered_map<char, int> mp;
    int sum = 0;
    for (char c : s)
    {
        if (c == 'X')
            sum += 10;
        else if (c == 'I')
            sum += 1;
        else if (c == 'V')
            sum += 5;
        else if (c == 'L')
            sum += 50;
        else if (c == 'C')
            sum += 100;
        else if (c == 'D')
            sum += 500;
        else if(c == 'M')
            sum += 1000;
    }
    string ans = intToRoman(sum);
    return ans;
}

int main(){
    cout << func("XXXVVIIIIIIIIII");
}