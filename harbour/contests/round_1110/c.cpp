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
    if (n == 1)
    {
        if (k == 1)
            cout << "YES\n0\n";
        else
            cout << "NO\n";
        return;
    }

    int need = k ^ n;
    if (need)
    {
        if (64 - __builtin_clzll(need) > 64 - __builtin_clzll(n - 1))
        {
            cout << "NO" << endl;
            return;
        }
    }

    vector<int> ans(n);
    iota(ans.begin(), ans.end(), 0);
    if (need == 0)
    {
        swap(ans[0], ans[n - 1]);
    }
    else if (need < n)
    {
        swap(ans[n - 1], ans[need]);
        swap(ans[n - 2], ans[0]);
    }
    else
    {
        swap(ans[n - 2], ans[need ^ (n - 1)]);
        swap(ans[n - 3], ans[0]);
    }

    cout << "YES" << endl;
    for (auto &it : ans)
        cout << it << ' ';
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