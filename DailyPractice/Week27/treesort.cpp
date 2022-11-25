#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int cycleSort(vector<int> &nums)
    {

        int n = nums.size(), len = n;
        map<int, int> map;
        for (int i = 0; i < len; i++)
            map[nums[i]] = i;

        sort(nums.begin(), nums.end());

        bool visited[len] = {0};

        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (visited[i] || map[nums[i]] == i)
                continue;

            int j = i, cycle_size = 0;
            while (!visited[j])
            {
                visited[j] = true;
                j = map[nums[j]];
                cycle_size++;
            }
            if (cycle_size > 0)
            {
                ans += (cycle_size - 1);
            }
        }
        return ans;
    }
    int minimumOperations(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        q.push(nullptr);
        vector<int> v;
        int ans = 0;
        while (q.size() > 1)
        {
            auto temp = q.front();
            q.pop();
            if (!temp)
            {
                ans += cycleSort(v);
                cout << ans;
                v.clear();
                q.push(nullptr);
            }
            else
            {
                v.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
        }
        return ans;
    }
};