#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<int> tmp_a = a, tmp_b = b;
    sort(tmp_a.begin(), tmp_a.end());
    sort(tmp_b.begin(), tmp_b.end());

    for (int i = 0; i < n; ++i)
    {
        if (tmp_a[i] < tmp_b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    bool f = false;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < b[i])
        {
            f = true;
            break;
        }
    }
    if (f)
    {
        int ans = x;
        for (int i = 0; i < n; ++i)
        {
            ans += tmp_a[i] - tmp_b[i];
        }
        cout << ans << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            ans += a[i] - b[i];
        }
        cout << ans << endl;
    }
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