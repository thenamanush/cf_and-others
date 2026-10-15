#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int l = 0, h = 1e18, ans = 0;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        int s = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % m == 0)
                s += a[i] / m;
            else
                s += a[i] / m + 1;
        }
        if (s <= t)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

    solve();
}