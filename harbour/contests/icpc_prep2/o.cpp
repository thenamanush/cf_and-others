#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int l, r, x, y;
    cin >> l >> r >> x >> y;

    if (y % x != 0)
    {
        cout << 0 << endl;
        return;
    }

    int k = y / x;
    int ans = 0;

    for (int p = 1; p * p <= k; p++)
    {
        if (k % p != 0)
            continue;

        int q = k / p;

        if (gcd(p, q) != 1)
            continue;

        int a = x * p;
        int b = x * q;

        if (a >= l && b <= r)
        {
            if (a == b)
                ans++;
            else
                ans += 2;
        }
    }

    cout << ans << '\n';
}

int32_t main()
{
    alliswell

    solve();
}