
#include<bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
      int ans = x ^ y;
      int i = 0 , j = 0;
      while(!(ans & 1)){
          i++;
          ans = ans >> 1;
      }
      ans = ans >> 1;
      while(!(ans & 1)){
          j++;
          ans = ans>> 1;
      }
      return j;
}
int main(){
    cout << hammingDistance(8, 1);
}