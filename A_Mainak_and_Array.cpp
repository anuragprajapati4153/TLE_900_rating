#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (n == 1)
        cout << "0" << endl;
    else
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i > 0)
                maxi = max(maxi, arr[i]);
            if (i < n - 1)
                mini = min(mini, arr[i]);
        }

        int diff = arr[n - 1] - mini;
        diff = max(diff, maxi - arr[0]);
        int adjDiff = 0;
        for (int i = 0; i < n - 1; i++)
        {
            adjDiff = max(adjDiff, arr[i] - arr[i + 1]);
        }
        cout << max(diff, adjDiff) << endl;
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