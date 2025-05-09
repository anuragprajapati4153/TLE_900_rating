#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long x, n;
    cin >> x >> n;
    long long rem = n % 4;
    long long div = n / 4;
    if (rem == 0)
        cout << x << endl;
    else if (rem == 1)
    {
        if (x % 2 == 0)
            cout << x - (div * 4) - 1 << endl;
        else
            cout << x + (div * 4) + 1 << endl;
    }
    else if (rem == 2)
    {
        if (x % 2 == 0)
            cout << x + 1 << endl;
        else
            cout << x - 1 << endl;
    }
    else
    {
        if (x % 2 == 0)
            cout << x + (div * 4) + 4 << endl;
        else
            cout << x - (div * 4) - 4 << endl;
    }
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