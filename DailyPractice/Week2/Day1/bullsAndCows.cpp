#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int cow = 0, bull = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){   
                if(secret[i] == guess[j] && i == j){
                    cow++;
                }else if(secret[i] == guess[j] && i!= j){
                    bull++;
                }
            }
        }
        return to_string(cow) + 'A' +  to_string(bull) +'B';
    }
};