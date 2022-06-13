#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rearrange(int arr[], int size)
    {
        vector<int> positives ,negatives;
        for (int i = 0; i < size;i++){
            if(arr[i] > 0)
                positives.push_back(arr[i]);
            else
                negatives.push_back(arr[i]);
        }
        int j = 0, k = 0;
        for (int i = 0; i < size && j < positives.size() && k < negatives.size();i++){
            if(i%2 ==0)
                arr[i] = positives[j++];
            else
                arr[i] = negatives[k++];
        }
        if(j < positives.size())
            arr[size - 1] = positives[j];
        else if(k < negatives.size())
            arr[size - 1] = negatives[k];
    }
};
int main(){
    int nums[]{9, 4, -2, -1, 5, 9, -5};
    Solution().rearrange(nums, 7);
    for (int i = 0; i < 7;i++){
        cout << nums[i];
    }
}