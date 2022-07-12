#include <iostream>
using namespace std;
int exactly3Divisors(int n)
{
    // Your code here
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (j * j == i)
                count++;
            else if (i % j == 0)
                count += 2;
        }
        if (count == 3){
            cout << i << " ";
            ans++;
        }
    }
    return ans;
}

int main()
{
    cout << exactly3Divisors(156464);
}