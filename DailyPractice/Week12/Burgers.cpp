#include <bits/stdc++.h>
using namespace std;
int solve()
{
     int small_burger, premium_burger, total, money;
        cin >> small_burger >> premium_burger >> total >> money;
        int count = 0, small_burger_count = 0;
        while (money - premium_burger >= 0)
        {
            money -= premium_burger;
            count++;
        }
        while (count != total)
        {
            if (count == 0)
            {
                break;
            }
            if (money < small_burger)
            {
                count--;
                money += premium_burger;
            }
            money -= small_burger;
            small_burger_count++;
            count++;
        }
        if (count == 0)
            cout << "-1" << endl;
        else
            cout << small_burger_count << " " << total - small_burger_count << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        solve();
        n--;
    }
}