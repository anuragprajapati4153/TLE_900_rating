#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (char c : s)
    {
        if (c == '0')
            zero++;
        else
            one++;
    }
    if (min(zero, one) % 2 == 1)
        cout << "DA" << endl;
    else
        cout << "NET" << endl;
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