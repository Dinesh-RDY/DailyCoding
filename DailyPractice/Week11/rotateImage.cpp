#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void recurse(vector<vector<int>> &matrix, int start, int end)
    {
        if (end - start < 1)
        {
            return;
        }
        int id = 0;
        for (int i = start; i < end; i++)
        {
            int a = matrix[start][start + id];
            int b = matrix[start + id][end];
            int c = matrix[end][end - id];
            int d = matrix[end - id][start];

            matrix[start][start + id] = d;
            matrix[start + id][end] = a;
            matrix[end][end - id] = b;
            matrix[end - id][start] = c;

            id++;
        }
        recurse(matrix, start + 1, end - 1);
        return;
    }
    void rotate(vector<vector<int>> &matrix)
    {
        recurse(matrix, 0, matrix.size() - 1);
    }
};