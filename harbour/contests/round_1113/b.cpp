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

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (b[0] < a[0] || b[m - 1] > a[n - 1])
        return void(cout << "NO" << endl);

    if (n < 2 * m)
        return void(cout << "NO" << endl);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] > b[i])
        {
            return void(cout << "NO" << endl);
        }
    }
    for (int i = n - 1; i >= n - m; --i)
    {
        if (a[i] < b[i - (n - m)])
        {
            return void(cout << "NO" << endl);
        }
    }
    cout << "YES" << endl;
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