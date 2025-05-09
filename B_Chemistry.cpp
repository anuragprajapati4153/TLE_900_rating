#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int mp[26] = {0};
    for (int i = 0; i < n; i++)
    {
        mp[s[i] - 'a']++;
    }
    int oddCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mp[i] % 2 == 1)
            oddCount++;
    }
    k = k - oddCount;
    if (k < -1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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