#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int k;
    cin >> k;
    if (k == 1 || k % 2 != 0)
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