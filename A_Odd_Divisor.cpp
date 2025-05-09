#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n;
    cin >> n;
    while (n % 2 == 0)
        n /= 2;
    if (n > 1)
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