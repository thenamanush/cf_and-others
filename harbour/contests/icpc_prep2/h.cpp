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

    if (k > n - 1)
        return void(cout << -1 << endl);

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i)
        ans[i] = i;

    if (n - k & 1)
        for (int i = k + 2; i <= n; i += 2)
            swap(ans[i], ans[i + 1]);
    else
    {
        swap(ans[k + 2], ans[1]);
        for (int i = k + 3; i <= n; i += 2)
            swap(ans[i], ans[i + 1]);
    }

    for (int i = 1; i <= n; ++i)
        cout << ans[i] << ' ';
    cout << endl;
}
int32_t main()
{
    alliswell

        int t = 1;
    // cin >> t; while(t--)
    solve();
}