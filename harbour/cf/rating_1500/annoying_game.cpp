#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    k &= 1;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    vector<int> l(n);
    l[0] = a[0];
    for (int i = 1; i < n; ++i)
    {
        l[i] = max(a[i], l[i - 1] + a[i]);
    }
    if (!(k & 1))
    {
        cout << *max_element(l.begin(), l.end()) << endl;
        return;
    }
    vector<int> r(n);
    r[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        r[i] = max(a[i], r[i + 1] + a[i]);
    }

    int ans = -1e9;
    for (int i = 0; i < n; ++i)
    {
        int s = a[i] + b[i];
        if (i > 0)
            s += max(0LL, l[i - 1]);
        if (i < n - 1)
            s += max(0LL, r[i + 1]);
        ans = max(s, ans);
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