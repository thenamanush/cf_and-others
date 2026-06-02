#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    /*
    observation:
    -> for i, all the bigger numbers from the left is contributing
    ** take suffix minimum
    */

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> suf_min(n);
    suf_min[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        suf_min[i] = min(suf_min[i + 1], a[i]);

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += a[i] - suf_min[i];
    }

    int cur = 1, mx = 1;
    for (int i = 0; i + 1 < n; ++i)
    {
        if (suf_min[i] == suf_min[i + 1])
            cur++;
        else
            cur = 1;

        mx = max(mx, cur);
    }
    // cout << cur << endl;
    cout << ans + mx - 1 << endl;
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