#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int max_price, int min_price, int n)
{
    int count = 0;
    int i = 0, j = 0;
    unordered_map<int, int> mp;
    while (j < n)
    {
        if (arr[j] < min_price  || arr[j] > max_price){
            j++;
            i = j;
            mp.clear();
            continue;
        }
        mp[arr[j++]]++;
        if(mp[min_price] && mp[max_price]) {
            count++;
        }
    }
    while(i < j){
        mp[arr[i]]--;
        i++;
        if(mp[min_price] && mp[max_price]) {
            count++;
        }
    }
    return count;
}
int main(){
    int arr[]{1,2,3,2};
    cout << solve(arr, 3, 2, 4);
}