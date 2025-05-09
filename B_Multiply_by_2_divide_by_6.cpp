#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n;
    cin >> n;
    int cnt = 0;
    while (n % 3 == 0)
    {
        if (n % 6 == 0)
        {
            cnt++;
            n /= 6;
        }
        else
        {
            cnt += 2;
            n /= 3;
        }
    }
    if (n == 1)
        cout << cnt << endl;
    else
        cout << "-1" << endl;
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