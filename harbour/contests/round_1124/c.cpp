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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    bool f = false;

    for (int i = n - k, j = k - 1; i >= 0 && j < n && j > i; i--, j++)
    {
        f = true;
        ans += max(a[i], a[j]);
    }

    if (!f)
    {
        for (int i = 0; i < k - 1; i++)
            ans += max(a[i], a[n - 1 - i]);

        for (int i = k - 1; i <= n - k; i++)
            ans += a[i];
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