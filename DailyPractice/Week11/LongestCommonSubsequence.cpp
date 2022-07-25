#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int N = 8;
bool isSafe(int board[8][8], int row, int col)
{
    int i, j;
    int count = 0;

    for (i = 0; i < N; i++)
    {
        if (board[row][i])
            count++;
        if (board[i][col])
            count++;
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            count++;

    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            count++;
    for (i = row, j = col; j < N && i < N; i++, j++)
        if (board[i][j])
            count++;
    for (i = row, j = col; j < N &&  i>= 0; i--, j++)
        if (board[i][j])
            count++;

    if (count == 6)
        return true;
    return false;
}
string MatrixChallenge(string strArr[], int arrLength)
{

    // code goes here
    bool isAttacking[8][8]{false};
    int board[8][8]{0};
    for (int i = 0; i < arrLength; i++)
    {
        int x = (strArr[i][1] - '0');
        int y = (strArr[i][3] - '0');
        board[x - 1][y - 1] = 1;
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j])
            {
                isAttacking[i][j] = !isSafe(board, i, j);
            }
        }
    }
    for (int i = 0; i < arrLength; i++)
    {
        int x = (strArr[i][1] - '0');
        int y = (strArr[i][3] - '0');
        if (isAttacking[x - 1][y - 1])
            return "(" + to_string(x) + "," + to_string(y) + ")";
    }
    return "True";
}

int main(void)
{

    // keep this function call here
    string A[] = {"(2,1)", "(4,3)", "(6,3)", "(8,4)", "(3,4)", "(1,8)", "(7,7)", "(5,8)"};
    int arrLength = sizeof(A) / sizeof(*A);
    cout << MatrixChallenge(A, arrLength);
    return 0;
}