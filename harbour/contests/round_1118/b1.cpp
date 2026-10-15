#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    // dorais na bhai ai e help korse, check kortasi hoy ki na.
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> pfs(m + 2);
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (auto &[x, y] : mp)
        pfs[x] += y;

    for (int i = m - 1; i >= 1; --i)
        pfs[i] += pfs[i + 1];

    vector<int> ans(m + 1);

    int pw = 2;

    for (int k = 1; k <= m; ++k)
    {
        int cur = 0;
        int lim = pw - 1;

        for (int x = 1; x <= m; ++x)
        {
            int sum = 0;

            // min(a[i] / x, 2^k - 1)
            for (int j = 1; j <= lim && j * x <= m; ++j)
            {
                sum += pfs[j * x];
            }

            // Special case: a[i] = x * 2^k
            if (pw * x <= m)
                sum += mp[pw * x];

            cur = max(cur, sum);
        }

        ans[k] = cur;

        // Once 2^k > m, every carrot can be completely split
        // into unit carrots.
        if (pw <= m / 2)
            pw *= 2;
        else
            pw = m + 1;
    }

    for (int i = 1; i <= m; ++i)
        cout << ans[i] << ' ';

    cout << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}