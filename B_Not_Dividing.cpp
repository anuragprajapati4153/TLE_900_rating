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
    if (arr[0] == 1)
        arr[0] = arr[0] + 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 1)
            arr[i] += 1;
        if (arr[i] % arr[i - 1] == 0)
        {
            arr[i] = arr[i] + 1;
        }
    }
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
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