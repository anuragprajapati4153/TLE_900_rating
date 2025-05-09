#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n, k, x;
    cin >> n >> k >> x;

    long long mini = (k * (k + 1)) / 2;
    long long maxi = ((2 * n * k) - (k * k) + k) / 2;
    if (x >= mini && x <= maxi)
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