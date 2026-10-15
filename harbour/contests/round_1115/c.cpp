#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n);
    vector<vector<int>> a(n, vector<int>(m));

    for (auto &x : d)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = m;
    for (int i = 0; i < n; ++i)
    {
        int mn = *min_element(d.begin(), d.begin() + i + 1);
        sort(a[i].rbegin(), a[i].rend());
        int s = 0;
        for (int j = 0; j < m; j++)
        {
            s += a[i][j];
            if (s >= mn)
            {
                ans = min(ans, j + 1);
                break;
            }
        }
    }
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