#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    int maxi = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (abs(a - i) != 0)
        {
            maxi = __gcd(maxi, abs(a - i));
        }
    }
    cout << maxi << endl;
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