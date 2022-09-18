#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << (n * n + 3 * n) / 2 << '\n';
    }
    return 0;
}
