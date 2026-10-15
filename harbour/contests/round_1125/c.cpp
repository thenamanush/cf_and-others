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

    for (auto &it : a)
        cin >> it;

    int m = n - 4;
    vector<int> v(m);
    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        v[i] = a[i] + a[i + 2] - a[i + 4];
        mp[v[i]]++;
    }

    int ans = 0;

    for (auto &[x, y] : mp)
    {
        if (y > 1)
            ans += y * (y - 1) / 2;
    }

    for (int i = 0; i < m; i++)
    {
        if (i + 2 < m && v[i] == v[i + 2])
            ans--;
        if (i + 4 < m && v[i] == v[i + 4])
            ans--;
    }

    cout << ans << endl;
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