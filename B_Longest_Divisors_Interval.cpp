#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n;
    cin >> n;
    int cnt = 0;
    int x = 1;
    while (n % x == 0)
    {
        cnt++;
        x++;
    }
    cout << cnt << endl;
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