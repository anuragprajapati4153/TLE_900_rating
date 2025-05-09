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
    bool flag = true;
    reverse(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        while (arr[i - 1] <= arr[i])
        {
            if (arr[i] == 0)
            {
                flag = false;
                break;
            }
            arr[i] /= 2;
            cnt++;
        }
    }
    if (flag)
        cout << cnt << endl;
    else
        cout << -1 << endl;
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