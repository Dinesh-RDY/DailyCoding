#include <vector>
#include <algorithm>
using namespace std;
#include <unordered_set>
vector<long long> findMissing(long long arr[], long long arr1[],
                              int N, int M)
{
    // Your code goes here
    unordered_set<long long> hmap;
    vector<long long> ans;
    for (int i = 0; i < M; i++)
    {
        if (hmap.find(arr1[i]) == hmap.end())
            hmap.insert(arr1[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (hmap.find(arr[i]) == hmap.end())
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}