#include <bits/stdc++.h>
using namespace std;


// function implementation
void solve()
{
    // write your code here
    long long a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    long long arr[n];
    long long sum = b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += min(a, arr[i]);
    }
    cout << sum - 1 << endl;
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