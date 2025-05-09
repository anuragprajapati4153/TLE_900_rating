#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n;
    cin >> n;
    if (n < 4 || n % 2 == 1)
        cout << -1 << endl;
    else
    {
        long long mini = ceil(n * 1.0 / 6);
        long long maxi = n / 4;
        cout << mini << " " << maxi << endl;
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