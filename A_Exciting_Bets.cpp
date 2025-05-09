#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long a, b;
    cin >> a >> b;
    if (b > a)
        swap(a, b);
    if (a == b)
        cout << "0 0" << endl;
    else
    {
        long long gcd = a - b;
        long long moves = min(b % gcd, gcd - b % gcd);
        cout << gcd << " " << moves << endl;
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