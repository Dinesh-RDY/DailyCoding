#include <bits/stdc++.h>
using namespace std;
string func(string s, int k)
{
    // k = k % 26;
    for (char &c : s)
    {
        int x = c - k;
        cout << x << endl;
        if (x < 65){
            int dis = c - 'A';
            int temp = abs(k - dis - 1);
            // cout << temp;
            c = 90 - temp;
        }
        c = x;
    }
    return s;
}
int main(){
    string s = "VGXGPU";
    cout << endl << func(s, 12);
}