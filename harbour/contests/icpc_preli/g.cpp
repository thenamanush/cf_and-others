#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    ll row[n];
    ll col[m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        row[i] = 0;
        for (int j = 0; j < m; ++j)
        {
            row[i] ^= a[i][j];
        }
    }

    for (int j = 0; j < m; ++j)
    {
        col[j] = 0;
        for (int i = 0; i < n; ++i)
        {
            col[j] ^= a[i][j];
        }
    }

    ll total = 0;
    for (int i = 0; i < n; ++i)
    {
        total += row[i];
    }
    for (int j = 0; j < m; ++j)
    {
        total += col[j];
    }
    ll ans = total;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            ll prev = row[i] + col[j];
            ll tmp_row = row[i] ^ a[i][j];
            ll tmp_col = col[j] ^ a[i][j];
            ll now = tmp_row ^ tmp_col;
            //cout << now << ' ';
            ans = min(ans, total - prev + now);
        }
    }
    cout << ans << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}