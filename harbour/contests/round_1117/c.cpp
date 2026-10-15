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

    vector<int> a(n + 1);
    vector<int> par(n + 1);

    for (int i = 2; i <= n; ++i)
    {
        cin >> a[i];

        if (a[i] == 1)
            par[i] = i;
        else
            par[i] = par[a[i]];
    }

    int m;
    cin >> m;

    set<int> ans;

    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;

        if (x != 1)
            ans.insert(par[x]);
    }

    cout << ans.size() << " ";

    for (auto x : ans)
        cout << x << " ";

    cout << endl;
}

int32_t main()
{
    alliswell

        int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}