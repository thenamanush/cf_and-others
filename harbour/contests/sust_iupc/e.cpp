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
    vector<int> a(n), ans(n);

    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && (a[i] == a[i - 1] || a[i] == a[i - 1] + 1))
        {
            ans[i] += ans[i - 1] + 1;
        }
        else
            ans[i] = 1;
    }
    sort(ans.rbegin(), ans.rend());
    cout << n - ans[0] << endl;
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