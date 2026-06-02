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
    vector<int> a(n), pfs(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i > 0)
            pfs[i] = pfs[i - 1] + a[i];
        else
            pfs[i] = a[i];
    }

    int mn = a[0];
    cout << a[0] << ' ';
    for (int i = 1; i < n; ++i)
    {
        cout << min(mn, pfs[i] / (i + 1)) << ' ';
        mn = min(mn, pfs[i] / (i + 1));
    }
    cout << endl;
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