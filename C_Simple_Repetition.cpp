#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
// function implementation
void solve()
{
    // write your code here
    int x, k;
    cin >> x >> k;
    if (isPrime(x) || (x == 1 && k == 2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

// driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}