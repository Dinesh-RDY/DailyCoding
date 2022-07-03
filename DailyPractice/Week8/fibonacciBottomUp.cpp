// Here we solve the problem from the smallest building blocks to bigger blocks

// Bottom up DP  is Mostly Iterative
#include <iostream>
using namespace std;
int fibonacciBottumUp(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    cout << fibonacciBottumUp(5);
}