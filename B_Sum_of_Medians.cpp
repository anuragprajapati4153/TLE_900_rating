#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n, k;
    cin >> n >> k;
    long long arr[n * k];
    long long sum = 0;
    for (int i = 0; i < n * k; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (n == 1)
        cout << sum << endl;
    else
    {
        sum = 0;
        int medianElement = ceil(n / 2) + 1;
        int it = (n * k) - medianElement;
        int cnt = 0;

        while (cnt < k)
        {
            sum += arr[it];
            it -= medianElement;
            cnt++;
        }
        cout << sum << endl;
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