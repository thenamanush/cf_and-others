#include <bits/stdc++.h>
using namespace std;
#define alliswell                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define int long long
#define endl '\n'

void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    if (k > m)
        return void(cout << "NO" << endl);
    cout << "YES" << endl;
    for (int i = 0; i < k - 1; ++i)
    {
        cout << 1 << ' ';
    }
    cout << m - (k - 1) << ' ';
    for (int i = k; i < n; ++i)
        cout << 1 << ' ';
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