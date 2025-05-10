#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    long long arr[n];
    long long zeroCount = 0, oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zeroCount++;
        if (arr[i] == 1)
            oneCount++;
    }
    if (oneCount > 0)
    {
        long long ans = pow(2, (zeroCount)) * oneCount;
        cout << ans << endl;
    }
    else
        cout << 0 << endl;
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