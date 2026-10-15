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
    vector<int> a(n), b(m);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int mx1 = a[0], mx2 = b[0];
    int s1 = a[n - 1], s2 = b[m - 1];

    for (int i = 0; i + 1 < n; ++i)
    {
        s1 += (a[i] - (a[i + 1] - 1));
    }
    for (int i = 0; i + 1 < m; ++i)
    {
        s2 += (b[i] - (b[i + 1] - 1));
    }
    mx1 = max(mx1, s1);
    mx2 = max(mx2, s2);

    if (mx1 >= mx2)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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