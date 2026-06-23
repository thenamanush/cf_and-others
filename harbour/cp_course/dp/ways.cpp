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
    vector<int> a(n + 1), pfs(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        pfs[i] = pfs[i - 1] + a[i];
    }

    if (pfs[n] % 3 != 0)
        return void(cout << 0 << endl);

    int ans = 0, cnt = 0, p = pfs[n] / 3;
    for (int j = 1; j <= n; ++j)
    {
        if (j >= 2)
            cnt += pfs[j - 1] == p;
        if (j >= 2 and j < n and pfs[j] == 2 * p)
            ans += cnt;
    }
    cout << ans << endl;
}

int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();

    return 0;
}