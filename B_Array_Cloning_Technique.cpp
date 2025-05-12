#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    unordered_map<long long, int> freq;

    // Count frequencies
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    // If all elements are the same
    if (freq.size() == 1)
    {
        cout << 0 << '\n';
        return;
    }

    // Find the max frequency
    int maxFreq = 0;
    for (const auto &p : freq)
    {
        maxFreq = max(maxFreq, p.second);
    }

    int cnt = 0;
    int curr = maxFreq;

    while (curr < n)
    {
        int add = min(curr, n - curr);
        cnt += 1 + add;
        curr += add;
    }

    cout << cnt << '\n';
}

int main()
{
    // ✅ Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
