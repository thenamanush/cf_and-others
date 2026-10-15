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
    int x_or = 0;
    for (auto x : a)
        x_or ^= x;

    if (n == 1)
        return void(cout << 0 << endl);
    int ans = 0;
    for (auto x : a)
    {
        int v = x_or ^ x;
        if (v < x)
            ans++;
    }
    cout << max(ans, 1LL) << endl;
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