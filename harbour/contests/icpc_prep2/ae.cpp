#include <bits/stdc++.h>
using namespace std;

#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long

int n, m;

bool ok(int x)
{
    return x / 2 >= n &&
           x / 3 >= m &&
           x / 2 + x / 3 - x / 6 >= n + m;
}

void solve()
{
    cin >> n >> m;

    int lo = 1, hi = 6ll * (n + m);

    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (ok(mid))
            hi = mid;
        else
            lo = mid + 1;
    }

    cout << lo << endl;
}

int32_t main()
{
    alliswell int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}