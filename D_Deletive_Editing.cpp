#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    string s, t;
    cin >> s >> t;
    int slen = s.length(), tlen = t.length();
    bool loopBreak = false;
    bool reachEnd = false;
    int i = 0, j = 0;
    int arr[26] = {0};
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    while (i < tlen)
    {
        if (arr[t[i] - 'A'] != 0)
        { // if char already occur before
            cout << "NO" << endl;
            break;
        }
        while (t[i] != s[j] && j < slen)
        { // traverse s string
            arr[s[j] - 'A']++;
            j++;
        }
        if (j == slen)
        {
            cout << "NO" << endl;
            break;
        }
        if (s[j] == t[i])
        { // git t[i] in s string
            i++, j++;
        }
        if (i == tlen)
            cout << "YES" << endl;
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