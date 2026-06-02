#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    /*
    observations:
    -> we can reach to 1 from any number after log(n)
    -> we can increase a number at max at x + 1(if odd only)
    -> even can never be increased

    visited by the smallest numbers will be the final set of possible point
    */

    unordered_map<int, int> cnt;
    unordered_map<int, int> cost;

    sort(a.begin(), a.end());

    int x = a[0];

    unordered_set<int> vis;
    int d = 0;

    while (!vis.count(x))
    {
        cnt[x]++;
        cost[x] += d;

        vis.insert(x);

        if (x & 1)
            x++;
        else
            x >>= 1;

        d++;
    }

    for (int i = 1; i < n; i++)
    {
        x = a[i];

        vis.clear();
        d = 0;

        while (!vis.count(x))
        {
            if (cnt.count(x))
            {
                cnt[x]++;
                cost[x] += d;
            }

            vis.insert(x);

            if (x & 1)
                x++;
            else
                x >>= 1;

            d++;
        }
    }

    int ans = 1e18;

    for (auto &[v, c] : cnt)
    {
        if (c == n)
            ans = min(ans, cost[v]);
    }

    cout << ans << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}