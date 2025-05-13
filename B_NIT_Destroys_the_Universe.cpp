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
    int zeroCnt = 0;
    for (int it : arr)
    {
        if (it == 0)
            zeroCnt++;
    }
    bool found_zero = false;
    int left = 0, right = n - 1;
    if (zeroCnt == n)
    {
        cout << 0 << endl;
        return;
    }
    while (arr[left] == 0)
        left++;
    while (arr[right] == 0)
        right--;
    for (int i = left; i <= right; i++)
    {
        if (arr[i] == 0)
        {
            found_zero = true;
            break;
        }
    }
    if (!found_zero)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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