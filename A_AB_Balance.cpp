#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    string s;
    cin >> s;
    // int ab=0,ba=0;
    int n = s.length();
    if (s[0] == s[n - 1])
        cout << s << endl;
    else
    {
        if (s[0] == 'a')
            s[0] = 'b';
        else
            s[0] = 'a';
        cout << s << endl;
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