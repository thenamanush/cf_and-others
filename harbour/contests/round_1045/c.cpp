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

    for (auto &x : a)
        cin >> x;

    int ans = 0;
    for (int i = 1; i < n; i += 2)
    {
        int t = a[i - 1];
        t += (i + 1 < n ? a[i + 1] : 0);
        if (t > a[i])
        {
            ans += t - a[i];
            if (i + 1 < n)
                a[i + 1] = max(0ll, a[i + 1] - (t - a[i]));
        }
    }
    // for (auto &x : a)
    //     cout << x << ' ';
    // cout << endl;
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