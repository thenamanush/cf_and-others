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

    for (auto &i : a)
        cin >> i, --i;
    // 2d vector
    vector<vector<bool>> v(n, vector<bool>(n));
    for (int i = 0; i < n; ++i)
    {
        vector<bool> f(n + 1);
        int mn = a[i], mx = a[i];
        for (int j = i; j < n; ++j)
        {
            if (f[a[j]])
                break;
            f[a[j]] = 1;

            mn = min(mn, a[j]);
            mx = max(mx, a[j]);

            if (mx - mn == j - i)
                v[mn][mx] = 1;
        }
    }
    for (int ans = n / 2; ans > 0; --ans)
    {
        for (int i = 0; i + 2 * ans <= n; ++i)
        {
            if (v[i][i + ans - 1] && v[i + ans][i + 2 * ans - 1])
                return void(cout << ans << endl);
        }
    }
    cout << "0\n";
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