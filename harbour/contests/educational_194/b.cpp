#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()

{
    int x, y, k;
    cin >> x >> y >> k;

    int d = y - x;
    int lo = x, hi = x + k - 1;

    int ans = 0;

    int mx = min(hi, d);

    for (int i = lo; i <= mx; ++i)
        ans += d % i;

    int mn = max(lo, d + 1);

    if (hi >= mn)

        ans += d * (hi - mn + 1);

    cout << ans << endl;
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