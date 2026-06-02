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
    int mx = -1, mn = 1e9;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        mx = max(a[i], mx);
        mn = min(a[i], mn);
    }

    int mid = (mx + mn) / 2;
    cout << max((mid - mn), (mx - mid)) << endl;
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