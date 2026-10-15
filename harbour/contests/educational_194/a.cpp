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

    int cnt = 0;

    for (auto &x : a)
    {
        cin >> x;
        if (x == 0)
            cnt++;
    }
    if (cnt < 2)
        return void(cout << -1 << endl);

    int ans = 2;
    if (a[0] == 0)
        ans--;
    if (a[n - 1] == 0)
        ans--;
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