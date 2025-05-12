#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cnt = 0;
    if (arr[0] == 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 0 && arr[i + 1] != 0)
            {
                cnt++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != 0 && arr[i + 1] == 0)
            {
                cnt++;
            }
        }
        if (arr[n - 1] != 0)
            cnt++;
    }
    cout << cnt << endl;
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