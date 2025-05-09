#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi = 0, cnt = 1;
    int i = 0, j = 0;
    while (j < n)
    {
        if (s[i] == s[j])
        {
            maxi = max(maxi, j - i + 1);
            j++;
        }
        else
        {
            i = j;
        }
    }
    cout << maxi + 1 << endl;
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