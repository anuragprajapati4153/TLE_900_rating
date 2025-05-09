#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + c;
    if ((2 * b) <= sum)
    {
        if (sum % (2 * b) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        sum = (2 * b) - a;
        long long temp = (2 * b) - c;
        if (sum % c == 0 || temp % a == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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