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

    for (auto &x : a)
        cin >> x;
    int g = 0;
    for (int i = 0; i < n; ++i)
    {
        g = gcd(g, abs(a[i] - a[0]));
    }

    int dif = abs(k - a[0]);
    cout << ((g == 0 || dif % g == 0) ? "YES" : "NO") << endl;
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