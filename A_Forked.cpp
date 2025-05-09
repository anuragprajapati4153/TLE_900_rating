#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long king[2];
    long long queen[2];
    long long a, b;
    cin >> a >> b;
    cin >> king[0] >> king[1];
    cin >> queen[0] >> queen[1];
    set<pair<long long, long long>> k;
    set<pair<long long, long long>> q;
    int dx[] = {-1, -1, 1, 1};
    int dy[] = {-1, 1, -1, 1};
    for (int i = 0; i < 4; i++)
    {
        k.insert({king[0] + dx[i] * a, king[1] + dy[i] * b});
        k.insert({king[0] + dx[i] * b, king[1] + dy[i] * a});

        q.insert({queen[0] + dx[i] * a, queen[1] + dy[i] * b});
        q.insert({queen[0] + dx[i] * b, queen[1] + dy[i] * a});
    }
    int ans = 0;
    for (auto it : k)
    {
        if (q.find(it) != q.end())
        {
            ans++;
        }
    }
    cout << ans << endl;
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