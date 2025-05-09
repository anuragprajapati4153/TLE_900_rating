#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    vector<long long> pSum;
    pSum.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pSum.push_back(pSum[i] + arr[i]);
    }
    while (q--)
    {
        int l, r;
        long long k, sum;
        cin >> l >> r;
        cin >> k;
        sum = pSum[r] - pSum[l - 1];
        sum = pSum[n] - sum + (k * (r - l + 1));
        if (sum % 2 == 1)
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