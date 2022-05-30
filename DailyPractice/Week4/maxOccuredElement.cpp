#include<bits/stdc++.h>
using namespace std;
int maxOccured(int l[], int r[], int n, int maxx){
    
        // Your code here
         vector<int> a(maxx+2, 0);
       for(int i=0;i<n;i++)
       {
           a[l[i]] += 1;
           a[r[i]+1] -= 1;
       }
       int mx = a[0], index = 0;
       for(int i=1; i<maxx+1;i++)
       {
           a[i] += a[i-1];
           if(mx < a[i])
           {
               mx = a[i];
               index = i;
           }
       }
       return index;
}