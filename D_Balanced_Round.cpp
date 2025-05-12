#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int i = 0, j = 1;
    int maxi = 1;
    while (j < n)
    {
        if (abs(arr[j] - arr[j - 1]) <= k)
        {
            maxi = max(maxi, j - i + 1);
        }
        else
        {
            i = j;
        }
        j++;
    }
    cout << n - maxi << endl;
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