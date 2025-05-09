#include <bits/stdc++.h>
using namespace std;

long long flor(long long n, long long x)
{
    if (n % x == 0)
        return n / x;
    else
        return (n / x) + 1;
}
// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    long long x;
    cin >> x;
    long long arr[n];
    long long sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        sum2 = sum2 + flor(arr[i], x);
    }
    cout << flor(sum, x) << " " << sum2 << endl;
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