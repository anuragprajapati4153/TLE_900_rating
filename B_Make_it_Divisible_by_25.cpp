#include <bits/stdc++.h>
using namespace std;

// function implementation
void solve()
{
    // write your code here
    long long n;
    cin >> n;
    int fiveCnt = 0, zeroCnt = 0;
    int cnt = 0;
    while (n)
    {
        int lastDigit = n % 10;
        n /= 10;
        // 00 format
        if (lastDigit == 0 && zeroCnt >= 1)
            break;
        // 25 || 75 format
        if (lastDigit == 2 && fiveCnt >= 1 || lastDigit == 7 && fiveCnt >= 1)
        {
            break;
        }
        // 50 format
        if (lastDigit == 5 && zeroCnt >= 1)
        {
            break;
        }
        if (lastDigit == 5)
            fiveCnt++;
        else if (lastDigit == 0)
            zeroCnt++;

        cnt++;
    }
    cout << cnt - 1 << endl;
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