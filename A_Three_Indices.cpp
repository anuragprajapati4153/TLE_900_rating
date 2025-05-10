#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int j;
    bool flag = false;
    for (j = 1; j < n - 1; j++)
    {
        if (arr[j - 1] < arr[j] && arr[j + 1] < arr[j])
        {
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << j << " " << j + 1 << " " << j + 2 << endl;
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